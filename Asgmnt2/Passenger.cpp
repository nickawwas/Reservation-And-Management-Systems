/*
 * Passenger.cpp
 * Author: Nicholas Kawwas
 * Completed: Feb, 2020
 * Purpose: Passenger Class
*/


#include <iostream>
#include<string>
#include<array>

using namespace std;
#include "Date.hpp"
#include "Passenger.hpp"

Passenger::Passenger(string n,int m,int d,int y) {
    name=n;
    dob=new Date(m,d,y);
    conum=0;
}

Passenger::Passenger(){
    name = "";
    conum = 0;
    dob = nullptr;
}

Passenger::~Passenger() {
    delete dob;
    cout << "Passenger Object Deleted!!!" << endl;
}

Passenger::Passenger(const Passenger&p){
    name = p.name;
    dob = p.dob;
    conum = p.conum;

    for(int i = 0;i < conum; i++)
        reserequest[i] = p.reserequest[i];
}

void Passenger::printPassenger() const {
    cout << "Passenger: " << name << endl;
    cout << "Date of Birth: ";
    dob->printDate();
}

void Passenger::setName(string n){ 
    name=n;
}

string Passenger::getName() const { 
    return name;
}

void Passenger::setRequest(int n) {
    if(conum <= 4){
        reserequest[conum] = n;
        conum++;
    } else
        cout << "Invalid Operation More Than 4 Requests Already" << endl;
}

void Passenger::printReservations() const{
    cout << "Passenger " << name << " Has " << conum << " Reservations: " << endl;

     for(int i = 0; i < conum; i++)
         cout << "Reservation number is " << reserequest[i] << endl;

     cout << endl;
}

void Passenger::removeReservation(int c) {
    for(int i = 0;i < conum;i++)
        if(reserequest[i] == c) {
            for(int j = i;j < conum;j++)
                reserequest[j] = reserequest[j + 1];
                
        conum--;
        return;
        }
}
