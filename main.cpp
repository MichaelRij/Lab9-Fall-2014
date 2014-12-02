/*
Author : Michael Rijlaarsdam
Lab #9 Inheritance
Purpose : This is the header for a program that demonstrates inheritance and imitates a stack
Can only handle ints;
*/
#include "stack.h"
#include "queue.h"

using namespace std;

int main () {

	queue Q;
	stack S;
	int i = 0;

	while(!Q.full()){
		Q.store(i++);
	}

	i=0;
	while(!Q.empty()){
		cout<<i++<<": "<<Q.retrieve()<< endl;
	}

	i=0;
	while(!S.full()){
		S.store(i++);
	}

	i=0;
	while(!S.empty()){
		cout<<i++<<": "<<S.retrieve()<< endl;
	}

}
