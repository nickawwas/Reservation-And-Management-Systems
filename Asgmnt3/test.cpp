/*
 * test.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Implemnts Library Book Manager System w/ Static or Dynamic Allocation 
*/

#pragma once

#include<iostream>
#include<string>
#include<cstring>

#include "referencemanager.h"

int main() {
    /* Dynamic Allocation (Pointers Tester)
    Reference* r1 = new Reference(2020, "Kawwas", "C++");
    r1->setTitle("Java");
    //cout << r1->getTitle() << endl;
    //cout << r1->getAuthor() << endl;
    //r1->print();
    
    Article* a1 = new Article(2020, "Kawwas", "C++", "Learning Programming", 0, 100);
    a1->setJournal("How to Book");
    cout << a1->getJournal() << endl;
    cout << a1->getPages() << endl;
    a1->print();
    
    Book* b1 = new Book(2020, "Kawwas", "C++", 100, "Hao Ye");
    b1->setPublisher("Nicolas");
    cout << b1->getPublisher() << endl;
    cout << b1->getPages() << endl;
    b1->print();
    
    Book* b2 = new Book(2020, "ElHadj", "C#", 101, "Mo");
    b2->setPublisher("Max");
    cout << b2->getPublisher() << endl;
    cout << b2->getPages() << endl;
    b2->print();
    
    Textbook* t1 = new Textbook(2020, "Kawwasaki", "Python", 102, "Khalil", "https://coen244.com");
    t1->setUrl("https://coen244-assignments.com");
    cout << t1->getPublisher() << endl;
    cout << t1->getPages() << endl;
    cout << t1->getUrl() << endl;
    t1->print();
    
    ReferenceManager* rm1 = new ReferenceManager(10);
    rm1->add(r1);
    rm1->add(a1);
    //rm1->print();
    rm1->add(b1);
    rm1->add(b2);
    rm1->add(t1);
    //rm1->print();
    
    if(rm1->searchId(2))
        rm1->deletePos(2);
        
    rm1->print();
    */
    
    //Static Allocation
    Reference r1(2020, "Kawwas", "C++");
    r1.setTitle("Java");
    //cout << r1.getTitle() << endl;
    //cout << r1.getAuthor() << endl;
    //r1.print();
    
    Article a1(2020, "Kawwas", "C++", "Learning Programming", 0, 100);
    a1.setJournal("How to Book");
    //cout << a1.getJournal() << endl;
    //cout << a1.getPages() << endl;
    //a1.print();
    
    Book b1(2020, "Kawwas", "C++", 100, "Hao Ye");
    b1.setPublisher("Nicolas");
    //cout << b1.getPublisher() << endl;
    //cout << b1.getPages() << endl;
    //b1.print();
    
    Book b2(2020, "ElHadj", "C#", 101, "Mo");
    b2.setPublisher("Max");
    //cout << b2.getPublisher() << endl;
    //cout << b2.getPages() << endl;
    //b2.print();
    
    Textbook t1(2020, "Kawwasaki", "Python", 102, "Khalil", "https://coen244.com");
    t1.setUrl("https://coen244-assignments.com");
    //cout << t1.getPublisher() << endl;
    //cout << t1.getPages() << endl;
    //cout << t1.getUrl() << endl;
    //t1.print();
    

    ReferenceManager* rm1 = new ReferenceManager(10);
    rm1->add(r1);
    rm1->add(a1);
    //rm1->print();
    rm1->add(b1);
    rm1->add(b2);
    rm1->add(t1);
    //rm1->print();
    
    if(rm1->searchId(2))
        rm1->deletePos(2);
        
    rm1->print();
    
    return 0;
}
