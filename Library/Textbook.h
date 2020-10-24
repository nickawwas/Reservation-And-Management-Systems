/*
 * Textbook.h
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Textbook Class
*/

#pragma once

#include <iostream>
#include <string>
#include <cstring>

#include "book.h"

class Textbook: public Book {
    private:
        char* url;
    public:
        Textbook(); //Default Constructor
        Textbook(int, const char*, const char*, int, const char*, const char*); //Regular Constructor
        Textbook(const Textbook&); //Copy Constructor
        ~Textbook(); //Destructor

        void setUrl(const char*); //Set Url
        char* getUrl() const; //Return Url

        virtual void print() const; //Print Textbook Object
};
