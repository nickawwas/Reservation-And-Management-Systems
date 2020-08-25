/*
 * Bed.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Bed Class
*/

#include <iostream>

#include "Bed.h"

using namespace std;

int Bed::unique_ID = 0;

//Default Constructor
Bed::Bed() {
	identifier = ++unique_ID;
	availability = 0; //0 -> available
}

//Destructor
Bed::~Bed() {
    cout << "Bed Object Deleted" << endl;
}

//Sets Availability
void Bed::setAvailability() {
	if (availability == 0)
		availability = 1;
    else
        availability = 0;
}

//Returns Availability
bool Bed::getAvailability() const {
	return availability;

}

//Returns Bed Id
int Bed::get_ID() const {
	return identifier;
}

//Prints Bed Info
void Bed::print() {
	cout << endl;
	cout << "BED INFORMATION: " << endl;
	cout << "Bed Id:" << identifier << endl;
	cout << "Availability:" << availability << endl;;
}
