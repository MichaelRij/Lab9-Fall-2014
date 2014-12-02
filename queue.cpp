/*
Author : Michael Rijlaarsdam
Lab #9 Inheritance
Purpose : This is the header for a program that demonstrates inheritance and imitates a queue
Can only handle ints;
*/

#include "queue.h"

     bool queue::empty(){
		if(tos<=0)return true;

		return false;
	}

     bool queue::full(){
		if(tos>n)return true;

		return false;
	}

     void queue::store(int val){//push
		if(!full()){
			p[tos++]=val;
		}
		
	}

     int queue::retrieve(){//pop

		if(!empty()){
			int  r = p[0];

			for(int i=0; i<tos; i++){
				p[i]=p[i+1];
			}
			tos--;

			return r;
		}
		return 0;
	}

