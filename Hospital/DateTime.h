/*
 * DateTime.h
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: DateTime Class
*/

#pragma once
#include <iostream>
#include "Date.h"
#include "Time.h"

class DateTime : public Time, public Date {
    public:
        DateTime(); //Default Constructor
        DateTime(int, int, int, int, int, int); //Regular Constructor
        ~DateTime(); //Destructor
    
        virtual void print(); //Prints Date and Time
};
