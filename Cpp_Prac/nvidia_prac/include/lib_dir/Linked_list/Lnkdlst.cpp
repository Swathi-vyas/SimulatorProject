/*
 * Lkdlst.cpp
 *
 *  Created on: 24-Mar-2018
 *      Author: Sagar
 */
#include<iostream>
#include "Lnkdlst.h"

namespace std {

Lnkd_lst::Lnkd_lst() {
	head = NULL;
	current = NULL;
}

void Lnkd_lst::insert(int dat){

	Node *temp = new Node;

	temp->data=dat;
	temp->next=NULL;

	if(head == NULL){
		head = temp;
		current = temp;
	}
	else{
		current->next = temp;
		current = current->next;
	}
}

void Lnkd_lst::disp(){

	Node *temp = new Node;
	temp = head;
	while(temp != NULL){
		cout << temp->data << endl;
		temp = temp->next;
	}

}
Lnkd_lst::~Lnkd_lst() {

}

} /* namespace std */
