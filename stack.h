/*
Author : Michael Rijlaarsdam
Lab #9 Inheritance
Purpose : This is the header for a program that demonstrates inheritance and imitates a stack
Can only handle ints;
*/
#ifndef STACK_H
#define STACK_H
#include "list.h"

class stack : public list{
private:
	int n;
    int tos;
public :

     stack(int size = 100) : list(size), n(size), tos(0) {};

     bool empty();
     bool full();
     void store(int);
     int retrieve();
};
#endif
