/*
 * Inpatient.hpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Inpatient Class
*/

#pragma once

#include "Doctor.h"

class Inpatient : public Person {
    private:
        int Bed_ID;
        double price;
    
        Doctor* DR = new Doctor();
        DateTime* admission = new DateTime();
        DateTime* discharge = new DateTime();

    public:
        Inpatient(); //Default Constructor
        Inpatient(string n, DateTime a, DateTime b, Doctor c); //Regular Constructor
        Inpatient(const Inpatient&); //Copy Constructor
        ~Inpatient(); //Destructor
    
        void setBed_ID(int a); //Sets Bed ID
        void cost(); //Sets Cost - $50/Day
    
        int getBed_ID() const; //Returns Bed ID
    
        //Prints Inpatient Info
        void print();
};
