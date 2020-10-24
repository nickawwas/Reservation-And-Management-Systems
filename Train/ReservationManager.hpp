/*
 * ReservationManager.hpp
 * Author: Nicholas Kawwas
 * Completed: Feb, 2020
 * Purpose: Reservation Manager Class
*/

#include <iostream>
#include<string>
#include<array>

using namespace std;

#ifndef ReservationManager_hpp
#define ReservationManager_hpp

#include <stdio.h>

#endif /* Date_hpp */
#endif /* Passenger_hpp */
#endif /* ReservationRequest_hpp */
#endif /* ReservationManager_hpp */

class ReservationManager{
    friend class ReservationRequest;

    private:
        Date *traveldate;
        Passenger* passengers;
        ReservationRequest** reservation = new ReservationRequest*[20];
    
        int reservationCounter = 0;
        const static size_t capacity{5};
        const static size_t numstation{6};
        
        int table[capacity][numstation]{0};
            
    public:
        ReservationManager(); //Default Constructor
        ReservationManager(int,int,int,ReservationRequest*); //Regular Constructor
        ReservationManager(const ReservationManager&); //Copy Constructor
        ~ReservationManager(); //Destructor
        void  printtable(); //Prints Table
        void successReservation(ReservationRequest*); //Success Function
        void printReservationdetail(int); //Print Details
        void cancelReservationrequst(int); //Cancels Reserv
        void cancelpastReservation(); //Cancels Reserv
};
