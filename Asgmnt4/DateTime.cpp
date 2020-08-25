/*
 * DateTime.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Date Time Class
*/


#include <iostream>

#include "DateTime.h"

using namespace std;

//Default Constructor
DateTime::DateTime() : Date(), Time() {}

//Regular Constructor
DateTime::DateTime(int a1, int b1, int c, int d, int e, int f) : Date(a1, b1, c), Time(d, e, f) { }

//Destructor
DateTime::~DateTime() {
    //cout << "DateTime Object Deleted" << endl;
}

//Prints Date and Time
void DateTime::print() {
	cout << "Date & Time: " << endl;
	cout << "Day: " << getDay() << endl;
	cout << "Month: " << getMonth() << endl;
	cout << "Year: " << getyear() << endl;

	cout << "Second: " << getSecond() << endl;
	cout << "Minute: " << getMinute() << endl;
	cout << "Hour: " << getHour() << endl << endl;
}
