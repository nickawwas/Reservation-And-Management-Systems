/*
 * Article.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Article Class
*/

#include<iostream>
#include<string>
#include<cstring>

#include "article.h"
#include "reference.h"

//Default Constructor
Article::Article():Reference() {
    journal = "";
    startP = 0;
    endP = 0;
}

//Regular Constructor
Article::Article(int y, const char* a, const char* t, string j, int s, int e) : Reference(y, a, t) {
    journal = j;
    startP = s;
    endP = e;
}

//Copy Constructor
Article::Article(const Article& a){
    journal = a.journal;
    startP = a.startP;
    endP = a.endP;
}

//Destructor
Article::~Article(){
    cout << "Article Object is Deleted" << endl;
}

//Set Journal Information
void Article::setJournal(string j) {
    journal = j;
}

//Set Start Page
void Article::setStart(int s) {
    startP = s;
}

//Set End Page
void Article::setEnd(int e) {
    endP = e;
}

//Return Journal Information
string Article::getJournal() const {
    return journal;
}

//Return Start Page
int Article::getStart() const {
    return startP;
}

//Return End Page
int Article::getEnd() const {
    return endP;
}

//Return Number of Pages
int Article::getPages() const{
     return endP - startP;
}

//Print Information
void Article::print() const{
    Reference::print();

    cout << "Journal Info: " << journal << endl;
    cout << "Start Page: " << startP;
    cout << "\tEnd Page: " << endP << endl;
}
