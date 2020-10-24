/*
 * Date.cpp
 * Author: Nicholas Kawwas
 * Completed: Feb, 2020
 * Purpose: Class Date
*/

#include <iostream>
#include<string>
#include<array>

using namespace std;

#include "Date.hpp"

Date::Date() {
    month = 1;
    day = 1;
    year = 2000;
}

Date::Date(int m,int d,int y) {
    month = m;
    day = d;
    year = y;
}

Date::~Date() {
   cout << "Date Object Deleted!!!" << endl;
}

void Date::printDate() const{
    cout << month << "/" << day << "/" << year << endl;
    cout << endl;
}

void Date::setDate(int m,int d,int y) {
    month = m;
    day = d;
    year = y;
}

int Date::getMonth() const{
    return month;
}

int Date::getDay() const{
    return day;
}

int Date::getYear() const{
    return year;
}

int Date::translateDate(){
    return year*365 + month*30 + day;
}
