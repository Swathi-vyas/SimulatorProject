/*
 * Queue.cpp
 *
 *  Created on: 24-Mar-2018
 *      Author: Sagar
 */

#include "Queue.h"

namespace std {

Queue::Queue(int s)
{
	// TODO Auto-generated constructor stub
	elem =new int[s];
	size=s;
	head=0;
	tail=0;
	i=0;
	while(i!=size)
		elem[i++]=0;

}
void Queue::enqueue(int data){
	if(!isFull())
		elem[tail++]=data;
}

int Queue::dequeue(){
	if(!isEmpty()){
		int data = elem[head++];
		return data;
	}else
		return -1;
}

int Queue::peek(){
	return elem[tail];
}

bool Queue::isFull(){
	if(tail==size)
		return true;
	else
		return false;
}

bool Queue::isEmpty(){
	if(head==tail)
		return true;
	else
		return false;
}
Queue::~Queue() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
