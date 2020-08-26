/*
 * pigLatinToEnglish.cpp
 * Author: Nicholas Kawwas
 * Completed: Jan, 2020
 * Purpose: Outputs English from Pig Latin
*/


#include <iostream>
#include<string>
using namespace std;

//Checks Whether -Way is Present: If so, Erase -Way
//If Not, Erase Ay and Undo Rotation Using Substring
string backInEng(string pigWord){
    unsigned long pos = pigWord.find("-");
    
    if(pigWord.find("-way") != - 1)
        pigWord.erase(pos, 4);
    else {
        pigWord.erase(pigWord.find("ay"), 2);
        pigWord = pigWord.substr(pos + 1, pigWord.length()) + pigWord.substr(0, pos);
    }
  
    return pigWord;
}

int main()
{
    string pigW = "";
    string inPig, inEng = "";
   
    cout << "Enter anything in Pig Latin: ";
    getline (cin, inPig);
    
    //Splits Pig Latin Sentence, Word by Word
    //Sends to Function to be Converted
    for(char pig: inPig)
      if(pig != ' ') {
          pigW = pigW + pig;
      } else {
          inEng = inEng + backInEng(pigW) + " ";
          pigW = "";
      }
    
    inEng = inEng + backInEng(pigW);
    
    cout << inEng;
    return 0;
}
