/*
 * Queue.h
 *
 *  Created on: 24-Mar-2018
 *      Author: Sagar
 */

#ifndef QUEUE_H_
#define QUEUE_H_

namespace std {

class Queue {
	int size,i,head,tail;
	int* elem;
public:
	Queue(int s);

//	int& operator[](int i){return elem[i];}

	void enqueue(int data);
	int dequeue();
	int peek();
	bool isFull();
	bool isEmpty();

	virtual ~Queue();
};

} /* namespace std */

#endif /* QUEUE_H_ */
