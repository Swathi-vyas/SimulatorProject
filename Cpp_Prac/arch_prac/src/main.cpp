#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Queue{

//	Queue();
//	~Queue();

	public:
		int front, rear, size;
		unsigned capacity;
		int* array;

};

Queue* createQ(int capacity){

	Queue* queue = new Queue();

	queue->capacity = capacity;
	queue->front = queue->size = 0;

	queue->rear = queue->capacity - 1;
	queue->array = new int[queue->capacity];
	return queue;

}

bool isFull(Queue* Q){

	if(Q->size == Q->capacity){
		return true;
	}
	return false;

}

bool isEmpty(Queue* Q){

	if(Q->size == 0){
		return true;
	}
	return false;

}

int enqueue(Queue* Q, int element){
	
	if(!isFull(Q)){

		Q->rear = (Q->rear+1) % Q->capacity;
		Q->array[Q->rear]=element;
		Q->size++;
		
		return 0;
	}
	else return INT_MIN;
}

int dequeue(Queue* Q){

	if(!isEmpty(Q)){
	
		int element = Q->array[Q->front];		
		Q->array[Q->front]=0;
		Q->front = (Q->front + 1) % Q->capacity;
		Q->size--;
		return element;

	}else return INT_MIN;

}

int front(Queue* Q){

	if(isEmpty(Q)) return INT_MIN;
	else return Q->array[Q->front];
}

int rear(Queue* Q){

	if(isEmpty(Q)) return INT_MIN;
	else return Q->array[Q->rear];
}

int main(){

	Queue* q = createQ(10);	
	int err=0;

	for(auto i=0;err!=INT_MIN; i++)
		err=enqueue(q, i);

	err=0;
	while(true){
		err = dequeue(q);
		if(err==INT_MIN) break;
		cout << err << endl;
	}

	//cout << isEmpty(q) << endl;

	return 0;

}
