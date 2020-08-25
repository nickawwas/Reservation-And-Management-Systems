/*
 * Person.hpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Person Class
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
    protected:
        int ID;
        string name;
        static int identifier;

    public:
        Person(); //Default Constructor
        Person(string name); //Regular Constructor
        Person(const Person&); //Copy Constructor
        ~Person(); //Destructor
        
        int getID() const; //Return Id
        string getName() const; //Return Name

        virtual void print() = 0;
};

