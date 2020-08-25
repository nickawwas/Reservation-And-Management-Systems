/*
 * test.cpp
 * Author: Nicholas Kawwas
 * Completed: Feb, 2018
 * Purpose: Tests Train Passenger Reservation System
*/

#include <iostream>
#include<string>
#include<array>

using namespace std;

#endif /* Date_hpp */
#endif /* Passenger_hpp */
#endif /* ReservationRequest_hpp */
#endif /* ReservationManager_hpp */

#include <stdio.h>
#include "Date.hpp"
#include "Passenger.hpp"
#include "ReservationRequest.hpp"
#include "ReservationManager.hpp"

int ReservationRequest::crrn=0;

int main(){
    Date d1(1,2,1999);
    Passenger p1("David",10,8,2020);
    ReservationRequest r1("Montreal","Toronto",3,&p1,8,2,2020);
    r1.printReservationRequest();
    ReservationRequest r2("Montreal","Dorval",1,&p1,10,30,2020);
    r2.printReservationRequest();
    p1.printReservations();
    Passenger p2("Max",1,1,2020);
    ReservationRequest r3("Dorval","Toronto",3,&p2,10,8,2020);
    r3.printReservationRequest();
    p2.printReservations();
    ReservationManager m1(8,1,2021,&r3);
    p2.printReservations();
}
