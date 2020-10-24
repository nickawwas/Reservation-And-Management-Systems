/*
 * Inpatient.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Inpatient Class
*/

#include <iostream>
#include <vector>

#include "Inpatient.h"

using namespace std;

//Default Constructor
Inpatient::Inpatient() : Person() {
	DR = nullptr;
	admission = nullptr;
	discharge = nullptr;
	Bed_ID = 0;
	price = 0;
}

//Regular Constructor
Inpatient::Inpatient(string n, DateTime a, DateTime b, Doctor c) :Person(n) {
	*admission = a;
	*discharge = b;
	*DR = c;
	cost();
}

//Copy Constructor
Inpatient::Inpatient(const Inpatient& i) {
    Bed_ID = i.Bed_ID;
    price = i.price;
    
    DR = i.DR;
    admission = i.admission;
    discharge = i.discharge;
}

//Destructor
Inpatient::~Inpatient() {
    delete DR;
    delete admission;
    delete discharge;
    
    cout << "Inpatient Object Deleted" << endl;
}

//Sets Bed Id
void Inpatient::setBed_ID(int a) {
	Bed_ID = a;
}

//Returns Bed Id
int Inpatient::getBed_ID() const {
	return Bed_ID;
}

//Sets Cost - $50/Day
void Inpatient::cost() {
	int duration;
	int year = (discharge->getyear() - admission->getyear()) * 365;
	int month = (discharge->getMonth() - admission->getMonth()) * 30;
	int day = (discharge->getDay() - admission->getDay());
	duration = year + month + day;
	price = duration * 50;
}


//Prints Inpatient Info
void Inpatient::print() {
	cout << "INPATIENT INFO:" << endl;
	cout << "Name: " << getName() << endl;
	cout << "ID: " << getID() << endl;
	cout << "Doctor: " << DR->getName() << endl;
	cout << "Bed ID: " << Bed_ID << endl;
	cout << "Cost: " << price << endl;
	cout << endl << endl;
    
    DR->print();
	cout << endl;
}
