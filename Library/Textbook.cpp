/*
 * Textbook.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Textbook Class
*/

#pragma once

#include<iostream>
#include<string>
#include<cstring>

#include "textbook.h"
//Default Constructor
Textbook::Textbook() : Book() {
    url = NULL;
}

//Regular Constructor
Textbook::Textbook(int y, const char* a, const char* t, int n, const char* p, const char* u) : Book(y, a, t, n, p) {
    url = new char[strlen(u) + 1];
    strcpy(url, u);
}

//Copy Constructor
Textbook::Textbook(const Textbook& t){
    url = t.url;
}

//Destructor
Textbook::~Textbook(){
    delete url;

    cout << "Textbook Object is Deleted" << endl;
}

//Set Url
void Textbook::setUrl(const char* u) {
    url = new char[strlen(u) + 1];
    strcpy(url, u);
}

//Return Url
char* Textbook::getUrl() const {
    return url;
}

//Print Information
void Textbook::print() const{
    Book::print();

    cout << "Url Link: " << url << endl;
}
