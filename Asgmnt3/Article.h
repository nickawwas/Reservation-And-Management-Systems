/*
 * Article.h
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Article Class
*/


#include<iostream>
#include<string>
#include<cstring>

#include "reference.h"

class Article:public Reference {
    private:
        string journal;
        int startP, endP;

    public:
        Article(); //Default Constructor
        Article(int, const char*, const char*, string, int, int); //Regular Constructor
        Article(const Article&); //Copy Constructor
        ~Article(); //Destructor

        void setJournal(string); //Set Journal Information
        void setStart(int); //Set Start
        void setEnd(int); //Set End

        string getJournal() const; //Return Journal Information
        int getStart() const; //Return Start Page
        int getEnd() const; //Return End Page

        virtual int getPages() const; //Return Number of pages

        virtual void print() const; //Print Article Object
};
