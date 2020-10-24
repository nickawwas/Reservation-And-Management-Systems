/*
 * Doctor.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Doctor Class
*/

#include <iostream>
#include <vector>

#include "Doctor.h"

using namespace std;

//Default Constructor
Doctor::Doctor() : Person() {
	speciality = " ";
	mednumber = " ";
}

//Regular Constructor
Doctor::Doctor(string a, string b, string c) : Person(a) {
	mednumber = b;
	speciality = c;
}

//Copy Constructor
Doctor::Doctor(const Doctor& d) {
    mednumber = d.mednumber;
    speciality = d.speciality;
}

//Destructor
Doctor::~Doctor(){
    cout << "Doctor Object Deleted" << endl;
}

//Adds Patient
void Doctor::add_list(Person& p) {
	list.push_back(&p);
}

//Prints List of Patients
void Doctor::print_list() {
	cout << "Doctor " << getName() << " has operated " << list.size() << " patients!" << endl;

	for (int i = 0; i < list.size(); i++) {
		cout << "----------------------------------------------------------------------" << endl;
		list[i]->print();
		cout << "------------------------------------------------------------------------" << endl;
		cout << endl << endl;
	}
}

//Prints Doctor Info
void Doctor::print() {
    cout << "DOCTOR INFO: " << endl;
    cout << "Id: " << getID() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Medical license number: " << mednumber << endl;
    cout << "Speciality: " << speciality << endl << endl;
}
