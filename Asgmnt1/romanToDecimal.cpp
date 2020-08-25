/*
 * romanToDecimal.cpp
 * Author: Nicholas Kawwas
 * Completed: Jan, 2020
 * Purpose: Converts Roman Numbers to Decimal
*/

#include <iostream>
using namespace std;

int main(){
    int num = 0;
    char romans[10];
    int decimal[10];
    
    cout << "Enter any Roman Number (ie VIII): " << endl;
    cin >> romans;
    
    //Places Value of Each Roman Number into int array
    for(int i = 0; i < 10; i++)
        if(romans[i] == 'M')
          decimal[i] = 1000;
        else if(romans[i] == 'D')
           decimal[i] = 500;
        else if(romans[i] == 'C')
            decimal[i] = 100;
        else if(romans[i] == 'L')
            decimal[i] = 50;
        else if(romans[i] == 'X')
            decimal[i] = 10;
        else if(romans[i] == 'V')
            decimal[i] = 5;
        else if(romans[i] == 'I')
            decimal[i] = 1;
        else
            decimal[i] = 0;
    
    //Adds if Preceding Number is Larger or Equal
    //Subtracts if Preceding Number is Smaller (Def of RM)
    for(int i = 0; i < 10; i++)
        if(decimal[i] >= decimal[i + 1])
            num += decimal[i];
        else
            num -= decimal[i];

    return num;
}
