/*
 * Vector.h
 *
 *  Created on: 28-Mar-2018
 *      Author: Sagar
 */

#ifndef VECTOR_H_
#define VECTOR_H_

namespace std {

class Vector {
	int *elem;
	int sz,i=0;
public:
	Vector(int s);
	int& operator[](int i){return elem[i];}
	int size();
	void read();
	int total();
	virtual ~Vector();
};

} /* namespace std */

#endif /* VECTOR_H_ */
