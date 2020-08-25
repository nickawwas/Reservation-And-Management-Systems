/*
 * Book.h
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Book Class
*/

#include<iostream>
#include<string>
#include<cstring>

#include "reference.h"

class Book: public Reference {
    protected:
        int numOfPages;
        char* publisher;
    public:
        Book(); //Default Constructor
        Book(int, const char*, const char*, int, const char*); //Regular Constructor
        Book(const Book&); //Copy Constructor
        ~Book(); //Destructor

        void setPublisher(const char*); //Set Publisher Name
        void setNumOfPages(int); //Set Number of Pages

        char* getPublisher() const; //Return Publisher Name
        virtual int getPages() const; //Return Number of Pages

        virtual void print() const; //Print Book Object
};
