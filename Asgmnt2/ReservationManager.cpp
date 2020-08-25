/*
 * ReservationManager.cpp
 * Author: Nicholas Kawwas
 * Completed: Feb, 2020
 * Purpose: Reservation Manager Class
*/

#include <iostream>
#include<string>
#include<array>

using namespace std;

#include "Date.hpp"
#include "Passenger.hpp"
#include "ReservationRequest.hpp"
#include "ReservationManager.hpp"

//Default Constructor
ReservationManager::ReservationManager() {
    traveldate = new Date();
    passengers = new Passenger[10];
    
    for(int i = 0; i < numstation; i++)
        for(int j = 0; j < capacity; j++)
            table[i][j] = 0;
}

//Regular Constructor
ReservationManager::ReservationManager(int m,int d,int y,ReservationRequest* b) {
    traveldate = new Date(m,d,y);
    //reservation[reservationCounter]=new ReservationRequest(b);
    reservationCounter++;
}

//Copy Constructor
ReservationManager::ReservationManager(const ReservationManager& r) {
    traveldate = r.traveldate;
    passengers = r.passengers;
    reservation = r.reservation;

    for(int i = 0; i < numstation; i++)
        for(int j = 0; j < capacity; j++)
            table[i][j] = r.table[i][j];
}

//Destructor
ReservationManager::~ReservationManager() {
    
    cout << "Reservation Manager Object Deleted!!!"<< endl;
}

//Table Printed
void ReservationManager::printtable(){
    cout<<"Seatno  Montreal  Dorval  Brockville  Kingston  Belleville  Toronto"<<endl;

    for(int i=0;i<capacity;i++) {
        cout<<i;
        for(int j=0;j<numstation;j++)
            cout<<"          "<< table[i][j];
        cout<<endl;
    }
}

//Ouput Reservation Information
void ReservationManager::printReservationdetail(int c) {
    for(int i=0;i < 10; i++){
        if(reservation[i]->getReservationnumber()==c){
            reservation[i]->printReservationRequest();
        break;
        }
    }
}

//Cancels Old reservation from Reservation Request
void ReservationManager::cancelReservationrequst(int c) {
    for(int i=0;i<20;i++)
        if(reservation[i]->getReservationnumber()==c)
            for(int j=i;j < 20; j++){
               reservation[j] = reservation[j+1];
               break;
            }
}

//Cancels Past reservation
//Both A member function that deletes all reservation requests after the travel date.//A member function that deletes old reservation requests of a passenger.
void ReservationManager::cancelpastReservation() {
    for(int i=0;i<20;i++) {
        if(traveldate->translateDate() > reservation[i]->translateDate()) {
            for(int k=0;k<4;k++){
                if((reservation[i]->passengers)->reserequest[k]==reservation[i]->getReservationnumber())
                   (reservation[i]->passengers)->reserequest[k]=0;
                }
        for(int j=i; j<20; j++)
            reservation[i]=reservation[i+1];
        }
    }
}

//Checks if Reservation is Available for Entire Group
// If SuccessfuI, Return reservation request number
//  Reservation Object Should be Inserted
//  Check if Passenger is in Passenger array
//      If Not, Store in Passenger Area W/ Reservation Number
// Else Return 0, Reservation Object Should be Deleted
void ReservationManager::successReservation(ReservationRequest*b) {
    int c1 = 0,c2 = 0,c3 = 0;
    
    if(b->getStartstation()=="Montreal")
       c1=0;
    else if(b->getStartstation()=="Dorval")
        c1=1;
    else if(b->getStartstation()=="Brockville")
        c1=2;
    else if(b->getStartstation()=="Kingston")
        c1=3;
    else if(b->getStartstation()=="Belleville")
        c1=4;

    if(b->getFinalstation()=="Dorval")
        c2=1;
    else if(b->getFinalstation()=="Brockville")
        c2=2;
    else if(b->getFinalstation()=="Kingston")
        c2=3;
    else if(b->getFinalstation()=="Belleville")
        c2=4;
    else if(b->getFinalstation()=="Toronto")
        c2=5;

    c3=b->getnumseat();

    int c4=0;

    for(int i=0;i<4;i++){
        int c=1;
        for(int j= c1;j < c2; j++)
            if(table[i][j] == 0)
                c++;
        
        if(c == c2-c1+1)
            c4++;
     
        //if(c4 >= c3)
           //table[i][j] = crrn;
        }
}
