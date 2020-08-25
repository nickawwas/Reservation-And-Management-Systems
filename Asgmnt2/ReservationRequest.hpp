/*
 * ReservationRequest.hpp
 * Author: Nicholas Kawwas
 * Completed: Feb, 2018
 * Purpose: Reservation Request Class
*/


#include <iostream>
#include<string>
#include<array>

using namespace std;

#ifndef ReservationRequest_hpp
#define ReservationRequest_hpp

#include <stdio.h>

#endif /* Date_hpp */
#endif /* Passenger_hpp */
#endif /* ReservationRequest_hpp */

class ReservationRequest{
    friend class ReservationManager;

    private:
        int counter;
        static int crrn;
        string startstation;
        string finalstation;
        int counterreservationrequest=0;
        int numseat;
        Passenger *passengers;
        Date *travelingdate;

    public:
        ReservationRequest(); //Default Constructor
        ReservationRequest(string,string,int,Passenger*,int,int,int); //Regular Constructor
        ReservationRequest(const ReservationRequest&); //Copy Constructor
        ~ReservationRequest();//Destructor
        
        void setStartstation(string); //Set Start Station
        void setFinalstation(string); //Set Final Station
        void setnumseat(int n);
        
        string getStartstation() const; //Get Start Station
        string getFinalstation() const; //Get Final Station
        int getnumseat() const; //Get Num Seat
        int getReservationnumber() const; //Get Reservation Number
        string getPassengername() const; //Get Passenger Name
        void getTravelingdate() const;   //Get Travling Date
             
        void storeReservationnum();     //Storing Reserv Num
        void printReservationRequest() const; //Print Reserv Request
             
        int translateDate();    //Compare Dates
};
