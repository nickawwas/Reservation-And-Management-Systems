/*
 * arithmeticCalc.cpp
 * Author: Nicholas Kawwas
 * Completed: Jan, 2020
 * Purpose: Calculates Result of Arithmetic Expression w/o Class String
*/

#include <iostream>
#include<cmath>
using namespace std;

int total[20];
int  numbers[20];
char symbols[20];
char equation[20];
    
//Finds all Symbols, Placing them into Array
void isSymbol() {
    int counter = 0;
    
    for(int i = 0; i < 20; i++)
        if((equation[i] < 48) || (equation[i] > 57))
            symbols[counter++] = equation[i];
        else
            numbers[i] = (equation[i] - 48);
}

//Finds all  Operands, Giving them their Correct Value
void findValue(){
    int location = 0;
    int pos1 = -1, pos2 = 0;
    
    for(int i = 0; i < 20; i++)
        if((equation[i] < 48) || (equation[i] > 57)) {
            pos2 = i - 1;
            
            if(pos2 != pos1) {
                for(int j = 0; j < i - pos1; j++)
                    total[location] += pow(10, j)*numbers[pos2--];
                    
                //Make Numbers Negative if Minus Sign is Infront of Number
                //And Disregard the Minus Sign -> + (- N) = - (+ N)
                if(equation[pos1] == '-')
                    if(equation[pos1 + 1] != '(')
                        total[location] = -(total[location]);
            
                location++;
            }
        
            pos1 = i;
        }
}

//Performs All Operations including Parentheses (Follows Order of Operations)
void solve(){
    int end = 0, sumP = 0;
    
    //Performs Parentheses First
    for(int i = 0; i < 20; i++)
        if(symbols[i] == '(') {
            for(int j = i; symbols[j] != ')'; j++)
                if(symbols[j] == '*') {
                    total[j] = total[j - 1]*total[j];
                    symbols[j] = '+';
                    total[j - 1] = 0;
                } else if(symbols[j] == '/') {
                    total[j] = total[j - 1]/total[j];
                    symbols[j] = '+';
                    total[j - 1] = 0;
                }
                
            for(int k = i; symbols[k] != ')'; k++) {
                sumP += total[k];
                total[k] = 0;
                end = k;
            }
            
            //Make Numbers Negative if Minus Sign is Infront of Brackets
            //And Disregard the Minus Sign -> + ( -S) = - ( +S)
            if(symbols[i - 1] != '-')
                total[end] = sumP;
            else
                total[end] = -(sumP);
        
            break;
        }
    
    //Performs Multiplication and Division
    for(int i = 0; i < 20; i++)
        if(symbols[i] == '*')
            if(symbols[i + 1] == '(') {
                total[end] = total[i]*total[end];
                total[i] = 0;
            } else if(symbols[i - 1] == ')') {
                total[i - 1] = total[end]*total[i - 1];
                total[end] = 0;
            } else {
                total[i + 1] = total[i]*total[i + 1];
                total[i] = 0;
            }
        else if(symbols[i] == '/')
            if(symbols[i + 1] == '(') {
                total[end] = total[i]/total[end];
                total[i] = 0;
            } else if(symbols[i - 1] == ')') {
                total[i - 1] = total[end]/total[i - 1];
                total[end] = 0;
            } else {
                total[i + 1] = total[i]/total[i + 1];
                total[i] = 0;
            }
}

int main() {
    cout << "Enter any Equation (ie 2*3+4): " << endl;
    cin >> equation;
    
    isSymbol();
    findValue();
    solve();
    
    //Calculates Final Result By Adding All Values from Operations
    int final = 0;
    for(int i = 0; i < 20; i++)
        final += total[i];
        
    //Prints Final Result
    cout << final << endl;
    return final;
}
