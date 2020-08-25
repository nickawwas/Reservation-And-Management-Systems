/*
 * Outpatient.h
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Outpatient Class
*/

#pragma once

#include <iostream>
#include "Doctor.h"

using namespace std;

class Outpatient : public Person {
    private:
        Doctor* Dr = new Doctor();
        DateTime* appointmentDate = new DateTime();

        static double fee;  //Hospital charge

    public:
        Outpatient(); //Default Constructor
        Outpatient(string n, DateTime a, Doctor b); //Regular Constructor
        Outpatient(const Outpatient&); //Copy Constructor
        ~Outpatient(); //Destructor
    
        void print(); //Prints Outpatient
};

