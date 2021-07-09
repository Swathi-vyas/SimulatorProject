/*
 * Grph.cpp
 *
 *  Created on: 25-Mar-2018
 *      Author: Sagar
 */

#include<iostream>
#include"Stack.h"
#include "Grph.h"

#define MAX 20
namespace std {

Grph::Grph() {
	vertexCount = 0;

	for(int i=0; i<20; ++i)
		list_vertex[i].visited=false;

	for(int i=0; i<20; ++i){
		for(int j=0; j<20; ++j)
			Matrix[i][j]=0;
	}
}

void Grph::display(int index){
	cout<< list_vertex[index].label <<endl;
}
void Grph::depthFirstSearch(){
	int i;
	Stack s0(20);
	list_vertex[0].visited = true;
	display(0);

	s0.push(0);

	while(!s0.isEmpty()){
		int unvisitedVertex = getunvisited(s0.peek());

		if(unvisitedVertex == -1)
			s0.pop();
		else
			list_vertex[unvisitedVertex].visited=true;
			display(unvisitedVertex);
			s0.push(unvisitedVertex);
	}
	for(i=0; i<vertexCount; ++i){
		list_vertex[i].visited = false;
	}
}
void Grph::addVertex(char label){
	Vertex v;
	v.label=label;
	v.visited=false;
	list_vertex[vertexCount++]=v;
}
int Grph::getunvisited(int vertexIndex){
	for(int i=0; i<vertexCount; ++i)
		if(Matrix[vertexIndex][i]==1 && list_vertex[vertexIndex].visited==false)
			return i;
	return -1;
}
void Grph::addEdge(int start, int end){
	Matrix[start][end]=1;
	Matrix[end][start]=1;
}
}
