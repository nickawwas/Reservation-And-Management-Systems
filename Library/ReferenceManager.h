/*
 * ReferenceManager.h
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Reference Manager Class
*/

#pragma once

#include<iostream>
#include<string>
#include<cstring>

#include "textbook.h"
#include "article.h"
#include "book.h"
#include "reference.h"

class ReferenceManager {
    private:
        Reference** ref;
        int pos, capacity;
    public:
        ReferenceManager(); //Default Constructor
        ReferenceManager(int); //Regular Constructor
        ReferenceManager(const ReferenceManager&); //Copy Constructor
        ~ReferenceManager(); //Destructor

        int get(int); //Get Pos
        bool add(Reference& r); //Adds Ref[++Pos]
        bool deletePos(int); //Delete Ref[Pos]
        bool searchId(int); //Search for Id

        virtual void print() const; //Print ReferenceManager Object
};
