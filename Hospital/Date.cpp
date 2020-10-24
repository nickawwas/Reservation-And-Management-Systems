/*
 * Date.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Date Class
*/

#include <iostream>
#include "Date.h"

using namespace std;

//Default Constructor
Date::Date() {
	day = 0;
	month = 0;
	year = 0;
}

//Regular Constructor
Date::Date(int a, int b, int c) {
	day = a;
	month = b;
	year = c;
}

//Copy Constructor
Date::Date(const Date& d) {
    day = d.day;
    month = d.month;
    year = d.year;
}

//Destructor
Date::~Date() {
    cout << "Date Object Deleted" << endl;
}

//Returns Day
int Date::getDay() const {
	return day;
}

//Returns Month
int Date::getMonth() const {
	return month;
}

//Returns Year
int Date::getyear() const {
	return year;
}
