/*
Author : Michael Rijlaarsdam
Lab #9 Inheritance
Purpose : This is the header for a program that demonstrates inheritance and imitates a list
Can only handle ints;
*/
#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class list {

protected:      

     vector<int> p;   

public :

     list( int n = 100) {p.resize(n);}// constuctor defaults to 100

     virtual bool empty() = 0;//dne in this class

     virtual bool full() = 0;//dne in this class

     virtual void store(int val) = 0;//dne in this class

     virtual  int retrieve() = 0;//dne in this class

};

#endif
