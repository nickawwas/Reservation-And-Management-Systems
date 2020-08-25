/*
 * Reference.h
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Reference Class
*/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Reference {
    protected:
        int id, yearOfPub;
        char* title;
        char* author;
        static int counter;

    public:
        Reference(); //Default Constructor
        Reference(int, const char*, const char*); //Regular Constructor
        Reference(const Reference&); //Copy Constructor
        ~Reference(); //Destructor

        void setId(int); //Set Id
        void setYear(int); //Set Year of Publication
        void setAuthor(const char*); //Set Author
        void setTitle(const char*); //Set Title

        int getId() const; //Return Id
        int getYear() const; //Return Year of Publication
        char* getAuthor() const; //Return Author
        char* getTitle() const; //Return Title

        virtual void print() const; //Print Reference Object
};
