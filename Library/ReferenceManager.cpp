/*
 * ReferenceManager.cpp
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
#include "referencemanager.h"

//Default Constructor
ReferenceManager::ReferenceManager() {
    pos = 0;
    capacity = 1;
    ref = new Reference*[capacity];

    for(int i = 0; i < capacity; i++)
        ref[i] = nullptr;
}

//Regular Constructor
ReferenceManager::ReferenceManager(int c) {
    pos = 0;
    capacity = c;
    ref = new Reference*[capacity];

    for(int i = 0; i < capacity; i++)
        ref[i] = nullptr;
}

//Copy Constructor
ReferenceManager::ReferenceManager(const ReferenceManager& t){
    pos = t.pos;
    capacity = t.capacity;

    ref = t.ref;
    for(int i = 0; i < capacity; i++)
        ref[i] = t.ref[i];
}

//Destructor
ReferenceManager::~ReferenceManager(){
    delete ref;

    cout << "ReferenceManager Object is Deleted" << endl;
}

int ReferenceManager::get(int i){
    if(ref[i] != nullptr)
        return ref[i]->getId();
}

//Adds Ref at Next Pos
bool ReferenceManager::add(Reference& r) {
    if(pos < capacity)
        ref[pos++] = new Reference(r);
    else
        return false;

    return true;
}

//Search for Id
bool ReferenceManager::searchId(int i){
    for(int j = 0; j < pos; j++)
        if(ref[j]->getId() == i)
            return true;

    return false;
}

//Delete Pos
bool ReferenceManager::deletePos(int p) {
    if(p < capacity && ref[p] != nullptr) {
        for(int j = p; j < pos; j++)
            ref[j] = ref[j + 1];
        pos--;
    } else
        return false;

    return true;
}

//Print Information
void ReferenceManager::print() const{
    for(int i = 0; i < pos; i++)
        cout << "Position: " << i << "\tReference Id: " << ref[i]->getId() << "\t Title: " << ref[i]->getTitle() << endl;

    cout << endl;
}
