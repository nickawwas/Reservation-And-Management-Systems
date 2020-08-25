/*
 * Hospital.hpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Hospital Class
*/

#pragma once

#include <array>

#include "Bed.h"
#include "Inpatient.h"
#include "Outpatient.h"

using namespace std;

class Hospital {
    private:
        int doctor_counter;
        int inpatient_counter;
    
        Bed** capacity = new Bed * [500];
        Doctor** doctors = new Doctor * [100];
        Inpatient** patients = new Inpatient * [500];

    public:
        Hospital(); //Regular Constructor
        ~Hospital(); //Destructor
    
        void addDoctor(Doctor& a); //Adds Doctor
        void addpatients(Inpatient& a); //Adds Patient
        void delDoctor(Doctor a); //Removes Doctor from Hospital
        void Delpatients(Inpatient a); //Removes Patient from Hospital

        void printDoc(); //Prints Doctors List
        void printpatients(); //Prints Patients List
        void search_print(int a); //Prints Specific Person
};

