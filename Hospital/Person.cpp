/*
 * Person.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Person Class
*/

#include <iostream>
#include "Person.h"

using namespace std;

int Person::identifier = 0;

//Default Constructor
Person::Person() {
	ID = 0;
	name = " ";
}

//Regular Constructor
Person::Person(string alpha) {
	name = alpha;
    ID = ++identifier;
}

//Copy Constructor
Person::Person(const Person& p) {
    name = p.name;
    ID = p.ID;
}

//Destructor
Person::~Person() {
    //cout << "Person Object Deleted" << endl;
}

//Return ID
int Person::getID() const {
	return ID;
}

//Return Name
string Person::getName() const {
	return name;
}
