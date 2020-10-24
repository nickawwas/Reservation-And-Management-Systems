/*
 * ReservationRequest.cpp
 * Author: Nicholas Kawwas
 * Completed: Feb, 2020
 * Purpose: Reservation Request Class
*/


#include <iostream>
#include<string>
#include<array>

using namespace std;

#include "Date.hpp"
#include "Passenger.hpp"
#include "ReservationRequest.hpp"

ReservationRequest::ReservationRequest(string s,string f,int u,Passenger*p,int m,int d,int y) {
     startstation = s;
     finalstation = f;
     numseat = u;
     passengers = p;
     travelingdate = new Date(m,d,y);
     crrn++;
     passengers->setRequest(crrn);
     counterreservationrequest++;
 }


 ReservationRequest::ReservationRequest() {
     passengers = nullptr;
     travelingdate = nullptr;
     startstation = "";
     finalstation = "";
     numseat = 0;
 }

 ReservationRequest::~ReservationRequest() {
     delete travelingdate;
     passengers->removeReservation(crrn);
     cout << "Reservation Request Object Deleted!!!" << endl;
 }

 ReservationRequest::ReservationRequest(const ReservationRequest&r) {
     startstation = r.startstation;
     finalstation = r.finalstation;
     numseat = r.numseat;
     passengers = r.passengers;
     travelingdate = r.travelingdate;
 }

 void ReservationRequest::setStartstation(string s) { 
    startstation=s;
 }

 string ReservationRequest::getStartstation() const {
    return startstation; 
 }

 void ReservationRequest::setFinalstation(string f) { 
    finalstation = f;    
}

 string ReservationRequest::getFinalstation () const {
    return finalstation;
}

  int ReservationRequest::getnumseat() const { 
    return numseat;
 }

 void ReservationRequest::setnumseat(int n) {
     if(n >= 0 && n <= 4)
         numseat = n;
     else
         cout << "Invalid Seat Number" << endl;
 }

 string ReservationRequest::getPassengername() const {
     return passengers->getName();
 }

 void ReservationRequest::getTravelingdate() const {
     travelingdate->printDate();
 }

 void ReservationRequest::printReservationRequest() const{
     cout << "Reservation Number: " << crrn << endl;
     cout << "Passenger Detail: ";
     passengers->printPassenger();
     cout << "Traveling Date: ";
     travelingdate->printDate();
     cout << "Starting Station is " << startstation << endl;
     cout <<"Final Station is " << finalstation << endl;
     cout << "Number of Seats Requested: " << numseat << endl;
     cout << endl;
 }

 int ReservationRequest::getReservationnumber() const{
     return crrn;
 }

 void ReservationRequest::storeReservationnum(){
     passengers->setRequest(crrn);
 }

 int ReservationRequest::translateDate(){
     return travelingdate->translateDate();
 }
