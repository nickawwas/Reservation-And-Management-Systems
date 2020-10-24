/*
 * Hospital.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Hospital Class
*/


#include <iostream>

#include "Hospital.h"

using namespace std;

//Regular Constructor
Hospital::Hospital() {
	doctor_counter = 0;

	for (int i = 0; i < 500; i++) {
        if(i < 100)
            doctors[i] = nullptr;
        
		patients[i] = nullptr;
		capacity[i] = new Bed();
	}
}

//Destructor
Hospital::~Hospital() {
    delete[] doctors;
    delete[] patients;
    delete[] capacity;
    
    cout << "Hospital Object Deleted" << endl;
}

//Adds Patient
void Hospital::addpatients(Inpatient& a) {
	if (inpatient_counter < 500) {
		patients[inpatient_counter] = &a;
		
		for (int i = 0; i < 500; i++) {
			if (capacity[i]->getAvailability() == 0) {
				a.setBed_ID(capacity[i]->get_ID());
				capacity[i]->setAvailability();
                
				break;
			}
		}

		cout << "Patient has been added to our system!" << endl;
        inpatient_counter++;

    } else
		cout << "Capacity exceeded!" << endl;
}

//Adds Doctor
void Hospital::addDoctor(Doctor& a) {
	if (doctor_counter < 100) {
		doctors[doctor_counter] = &a;
		doctor_counter++;
		cout << "Doctor has been added to our system" << endl;
	} else
		cout << "Capacity exceeded!" << endl;
}

//Removes Doctor from Hospital
void Hospital::delDoctor(Doctor a) {
	if (doctors[0] == nullptr) {
		cout << "There are 0 patients in our system!";
		return;
	}

	for (int i = 0; i < doctor_counter; i++) {
		if (doctors[i]->getID() == a.getID()) {
			doctor_counter--;
            
			for (int j = i; j < doctor_counter; j++)
				doctors[j] = doctors[j + 1];

			for (int w = doctor_counter; w < 100; w++)
				doctors[w] = nullptr;

			cout << "Doctor: " << a.getName() << " has been deleted from the Hospital!" << endl;
			return;
		}
	}

	cout << "The doctor is not found in the system!" << endl;
}

//Removes Patient from Hospital
void Hospital::Delpatients(Inpatient a) {
	if (patients[0] == nullptr) {
		cout << "There are 0 patients in our system!";
		return;
	}

    for (int i = 0; i < inpatient_counter; i++) {
		if (patients[i]->getID() == a.getID()) {
			inpatient_counter--;

            for (int j = i; j < inpatient_counter; j++)
				patients[j] = patients[j + 1];

			for (int w = inpatient_counter; w < 500; w++)
				patients[w] = nullptr;

			for (int x = 0; x < 500; x++)
				if (a.getBed_ID() == capacity[x]->get_ID())
					capacity[x]->getAvailability();
        
			cout << "The following patient and the bed assigned to him have been deleted from our system!" << endl;
			return;

		}
	}
    
    cout << "The patient is not found in the system!" << endl;
}

//Prints Doctors List
void Hospital::printDoc() {
	if (doctor_counter == 0)
		cout << "No Doctors have been added to our system"<<endl<<endl;
	else
		for (int i = 0; i < doctor_counter; i++) {
			doctors[i]->print();
			cout << endl << endl;
		}
}

//Prints Patients List
void Hospital::printpatients() {
	if (inpatient_counter == 0)
		cout << "No patients have been added to our system"<<endl<<endl;
	else
		for (int i = 0; i < inpatient_counter; i++) {
			cout << "---------------------------------------------------------------" << endl;
			patients[i]->print();
	
			cout << endl;
			cout << "BED FOR CURRENT PATIENT:" << endl;
			capacity[patients[i]->getBed_ID()-1]->print();
			cout << endl << endl;
			cout << "---------------------------------------------------------------" << endl;
		}
}

//Prints Specific Patient - Enter ID of A Patient
void Hospital::search_print(int a) {
	for (int i = 0; i < inpatient_counter; i++)
		if (patients[i]->getID() == a) {
			patients[i]->print();
	     	cout << endl << endl;
			capacity[patients[i]->getBed_ID()-1]->print();
			cout << endl;
			return;
		}

	cout << "ID not found!" << endl << endl;
}
