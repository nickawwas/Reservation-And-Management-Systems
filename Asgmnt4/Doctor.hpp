/*
 * Doctor.hpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Doctor Class
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "DateTime.h"
#include "Person.h"

using namespace std;

class Doctor : public Person {
    protected:
        string mednumber;
        string speciality;
        vector<Person*> list;

    public:
        Doctor(); //Default Constructor
        Doctor(string a, string b, string c); //Regular Constructor
        Doctor(const Doctor&); //Copy Constructor
        ~Doctor(); //Destructor
    
        void add_list(Person &p); //Adds Patient
        void print_list(); //Prints Patient List
    
        void print(); //Prints Doctor
};

