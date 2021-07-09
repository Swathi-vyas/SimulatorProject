/*
 * Vector.cpp
 *
 *  Created on: 28-Mar-2018
 *      Author: Sagar
 */
#include<iostream>
#include "Vector.h"

namespace std {

Vector::Vector(int s) {
	// TODO Auto-generated constructor stub
	elem = new int[s];
	sz=s;
}

int Vector::size(){
	return sz;
}

void Vector::read(){
	cout << "Enter the Vector elems:" << endl;

	for(i=0; i!=sz; i++)
		cin >> elem[i];
}

int Vector::total(){

	int sum=0;

	for(i=0; i!=sz; i++)
		sum+=elem[i];

	return sum;
}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
