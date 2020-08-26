/*
 * englishToPigLatin.cpp
 * Author: Nicholas Kawwas
 * Completed: Jan, 2020
 * Purpose: Outputs Pig Latin from English
*/


#include <iostream>
#include<string>
using namespace std;

//Checks Whether Character is Vowel by Comparing to String of Vowels
//If Vowel is Not First, Word is Rotated using Substring
string pigLatin(string engWord, string vowels){
    for(int i = 0; i < engWord.length(); i++)
        for(int j = 0; j < vowels.length(); j++)
            if(vowels[j] == tolower(engWord[i])) {
                if(i == 0) {
                    engWord.append("-way");
                    return engWord;
                } else {
                    engWord =  engWord.substr(i, engWord.length()) + "-" + engWord.substr(0, i) + "ay";
                    return engWord;
                }
            }
                
    engWord.append("-way");
    return engWord;
}

int main() {
    string engW = "";
    string inEng, inPig = "";
    string vowels = "aeiouy";
   
    cout << "Enter anything in English: ";
    getline (cin, inEng);
        
    //Splits English Sentence, Word by Word
    //Sends to Function to be Converted
    for(char word: inEng)
        if(word != ' ') {
            engW = engW + word;
        } else {
            inPig = inPig + pigLatin(engW, vowels) + " ";
          engW = "";
      }
    
    inPig = inPig + pigLatin(engW, vowels);
    
    cout << inPig;
    return inPig;
}

