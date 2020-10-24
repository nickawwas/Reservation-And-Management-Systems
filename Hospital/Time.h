/*
 * Time.h
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Time Class
*/


#pragma once

class Time {
    protected:
        int second;
        int minute;
        int hour;

    public:
        Time(); //Default Constructor
        Time(int, int, int); //Copy Constructor
        Time(const Time&); //Copy Constructor
        ~Time(); //Destructor
    
        int getSecond() const; //Returns Second
        int getMinute() const; //Returns Minutes
        int getHour() const; //Returns Hours
};
