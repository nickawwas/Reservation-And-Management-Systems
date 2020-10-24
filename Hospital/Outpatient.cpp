/*
 * Outpatient.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Outpatient Class
*/

#include <iostream>
#include <string>
#include <vector>

#include "Outpatient.h"
#include "Hospital.h"

using namespace std;

double Outpatient::fee = 50;

//Default Constructor
Outpatient::Outpatient() : Person() {
	appointmentDate = nullptr;
	Dr = nullptr;
}

//Regular Constructor
Outpatient::Outpatient(string n, DateTime a, Doctor b) : Person(n) {
	*appointmentDate = a;
	*Dr = b;
}

//Copy Constructor
Outpatient::Outpatient(const Outpatient& o) {
    Dr = o.Dr;
    appointmentDate = o.appointmentDate;
}

//Destructor
Outpatient::~Outpatient() {
    delete Dr;
    delete appointmentDate;
    
    cout << "Outpatient Object Deleted" << endl;
}

//Prints Outpatient Info
void Outpatient::print() {
	cout << "OUTPATIENT INFO: " << endl;
	cout << "Name: " << getName() << endl;
	cout << "ID: " << getID() << endl;
	cout << "Fee: " << fee << endl << endl;

	Dr->print();
	cout << endl << endl;

}
