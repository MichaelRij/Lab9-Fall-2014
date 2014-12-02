/*
Author : Michael Rijlaarsdam
Lab #9 Inheritance
Purpose : This is the header for a program that demonstrates inheritance and imitates a stack
Can only handle ints;
*/

#include "stack.h"

     bool stack::empty(){
		if(tos<=0)return true;

		return false;
	}

     bool stack::full(){
		if(tos>n)return true;

		return false;
	}

     void stack::store(int val){//push
		if(!full()){
			p[tos++]=val;
		}
		
	}

     int stack::retrieve(){//pop

		if(!empty()){
			return p[--tos];
		}
		return -1;

	}

