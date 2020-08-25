/*
 * Time.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Time Class
*/

#include <iostream>
#include "Time.h"

using namespace std;


//Default Constructor
Time::Time() {
	second = 0;
	minute = 0;
	hour = 0;
}

//Regular Constructor
Time::Time(int a, int b, int c) {
	second = a;
	minute = b;
	hour = c;
}

//Copy Constructor
Time::Time(const Time& t) {
    second = t.second;
    minute = t.minute;
    hour = t.hour;
}

//Destructor
Time::~Time() {
    //cout << "Time Object Deleted" << endl;
}

//Returns Seconds
int Time::getSecond() const {
	return second;
}

//Returns Minutes
int Time::getMinute() const {
	return minute;
}

//Returns Hours
int Time::getHour() const {
	return hour;
}
