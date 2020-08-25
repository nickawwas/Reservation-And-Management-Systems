/*
 * Book.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Book Class
*/

#pragma once

#include<iostream>
#include<string>
#include<cstring>

#include "book.h"
#include "reference.h"

//Default Constructor
Book::Book() : Reference() {
    publisher = NULL;
    numOfPages = 0;
}

//Regular Constructor
Book::Book(int y, const char* a, const char* t, int n, const char* p) : Reference(y,a,t) {
    numOfPages = n;

    publisher = new char[strlen(p) + 1];
    strcpy(publisher, p);
}

//Copy Constructor
Book::Book(const Book& b){
    publisher = b.publisher;
    numOfPages = b.numOfPages;
}

//Destructor
Book::~Book(){
    delete publisher;

    cout << "Book Object is Deleted" << endl;
}

//Set Journal Information
void Book::setPublisher(const char* p) {
    publisher = new char[strlen(p) + 1];
    strcpy(publisher, p);
}

//Set Start Page
void Book::setNumOfPages(int n) {
    numOfPages = n;
}

//Return Publisher Name
char* Book::getPublisher() const {
    return publisher;
}

//Return Number of Pages
int Book::getPages() const{
     return numOfPages;
}

//Print Information
void Book::print() const{
    Reference::print();

    cout << "Publisher Name: " << publisher << endl;
    cout << "Number of Pages: " << numOfPages << endl;
}

