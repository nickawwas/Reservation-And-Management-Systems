/*
 * Bed.hpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Bed Class
*/

#pragma once

#include <iostream>

using namespace std;

class Bed {
    private:
        int identifier;
        bool availability;
        
        static int unique_ID;

    public:
        Bed(); //Regular Constructor
        ~Bed(); //Destructor
    
        void setAvailability(); //Set Availability
    
        bool getAvailability() const; //Get Availability
        int get_ID() const; //Get Id
    
        void print(); //Print Bed Info
        
};

