/*
 * Date.hpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Date Class
*/

#pragma once

class Date {
    protected:
        int day;
        int month;
        int year;
    
    public:
        Date(); //Default Constructor
        Date(int a, int b, int c); //Regular Constructor
        Date(const Date&); //Copy Constructor
        ~Date(); //Destructor
    
        int getDay() const; //Returns Day
        int getMonth() const; //Return Month
        int getyear() const; //Return Year

};

