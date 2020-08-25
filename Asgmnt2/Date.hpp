/*
 * Date.hpp
 * Author: Nicholas Kawwas
 * Completed: Feb, 2020
 * Purpose: Class Date
*/

#include <iostream>
#include<string>
#include<array>

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>

#endif /* Date_hpp */

class Date{
    private:
        int month;
        int day;
        int year;

    public:
        Date(); //Default Constructor
        Date(int,int,int); //Regular Constructor
        ~Date(); //Destructor
        
        void setDate(int,int,int); //Sets the Date
        
        int getMonth() const; //Gets the Month
        int getDay() const; //Gets the Day
        int getYear() const; //Gets the Year
        
        int translateDate(); //Compares Dates
        
        void printDate() const; //Prints Date
};
