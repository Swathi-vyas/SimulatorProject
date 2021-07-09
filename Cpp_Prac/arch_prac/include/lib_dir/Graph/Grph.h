/*
 * Grph.h
 *
 *  Created on: 25-Mar-2018
 *      Author: Sagar
 */

#ifndef GRPH_H_
#define GRPH_H_

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

} /* namespace std */

#endif /* GRPH_H_ */
