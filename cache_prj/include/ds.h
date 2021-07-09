/*
 * Grph.h
 *
 *  Created on: 25-Mar-2018
 *      Author: Sagar
 */

#ifndef DS_H_
#define DS_H_

namespace std {

class Grph {
	struct Vertex{
		char label;
		bool visited;
	};
	Vertex list_vertex[20];
	int Matrix[20][20];
	int vertexCount;
public:
	Grph();
	void addVertex(char label);
	void addEdge(int start, int end);
	void display(int index);
	int getunvisited(int verterxIndex);
	void depthFirstSearch();
};

class Lnkd_lst {
	struct Node{
		int data;
		struct Node *next;
	};

	Node *current = new Node;
	Node *head = new Node;

public:
	Lnkd_lst();

	void insert(int data);
	void disp();
	virtual ~Lnkd_lst();
};

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

class Stack{
	int sz,i,head;
	int* elem;

public:
	Stack(int s);

//	int& operator[](int i){return elem[i];}

	void push(int a);
	int pop();
	int peek();
	int size();
	bool isFull();
	bool isEmpty();

	virtual ~Stack();
};

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

#endif /* DS_H_ */
