/*
 * Passenger.hpp
 * Author: Nicholas Kawwas
 * Completed: Feb, 2020
 * Purpose: Passenger Class
*/


#include <iostream>
#include<string>
#include<array>

#ifndef Passenger_hpp
#define Passenger_hpp

#include <stdio.h>

#endif /* Passenger_hpp */
#endif /* Date_hpp */

class Passenger{
    friend class ReservationManager;

    private:
        string name;
        int reserequest[4];
        Date *dob;
        int conum;

    public:
        Passenger(); //Default Constructor
        Passenger(string,int,int,int); //Regular Constructor
        Passenger(const Passenger&); //Copy Constructor
        ~Passenger(); //Destructor
        
        void setName(string); //Sets Name
        void setRequest(int); //Sets Request
        
        string getName() const; //Gets Name

        void removeReservation(int); //Removes Reservation
        
        void printPassenger() const; //Prints Passenger
        void printReservations() const; //Prints Reservations
};
