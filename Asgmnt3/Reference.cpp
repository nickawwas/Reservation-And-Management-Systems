/*
 * Reference.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Reference Class
*/

#include<iostream>
#include<string>
#include<cstring>

#include "reference.h"

//Default Constructor
Reference::Reference() {
    id = 0;
    yearOfPub = 0;
    author = NULL;
    title = NULL;
}

//Regular Constructor
Reference::Reference(int y, const char* a, const char* t){
    id = counter++;
    yearOfPub = y;
    author = new char[strlen(a) + 1];
    strcpy(author, a);

    title = new char[strlen(t) + 1];
    strcpy(title, t);
}

//Copy Constructor
Reference::Reference(const Reference& r){
    id = r.id;
    yearOfPub = r.yearOfPub;
    author = r.author;
    title = r.title;
}

//Destructor
Reference::~Reference(){
    delete author;
    delete title;

    cout << "Reference Object is Deleted" << endl;
}

//Set Id Number
void Reference::setId(int i) {
    id = i;
}

//Set Year of Publication
void Reference::setYear(int y) {
    yearOfPub = y;
}

//Set Author Name
void Reference::setAuthor(const char* a) {
    author = new char[strlen(a) + 1];
    strcpy(author, a);
}

//Set Title Name
void Reference::setTitle(const char* t) {
    title = new char[strlen(t) + 1];
    strcpy(title, t);
}

//Get Id Number
int Reference::getId() const{
    return id;
}

//Get Year of Publication
int Reference::getYear() const{
    return yearOfPub;
}

//Get Author Name
char* Reference::getAuthor() const{
    return author;
}

//Get Title Name
char* Reference::getTitle() const{
    return title;
}

//Prints Reference Object
void  Reference::print() const{
    cout << "Reference Id: " << id << endl;
    cout << "Author Name: " << author << endl;
    cout << "Title Name: " << title << endl;
    cout << "Year of Publication: " << yearOfPub << endl;
}

