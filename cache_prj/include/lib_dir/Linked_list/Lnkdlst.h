/*
 * Lnkdlst.h
 *
 *  Created on: 24-Mar-2018
 *      Author: Sagar
 */

#ifndef LNKDLST_H_
#define LNKDLST_H_

namespace std {

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

} /* namespace std */

#endif /* LNKDLST_H_ */
