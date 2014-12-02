/*
Author : Michael Rijlaarsdam
Lab #9 Inheritance
Purpose : This is the header for a program that demonstrates inheritance and imitates a queue
Can only handle ints;
*/
#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

class queue : public list{
private:
	int n;
	int tos;
public :

     queue(int size = 100) : list(size), n(size), tos(0) {};

     bool empty();
     bool full();
     void store(int val);
     int retrieve();
};
#endif
