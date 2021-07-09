#include<iostream>
#include<ds.h>

using namespace std;

struct Lnkd_lst::Node* sunolst(struct Lnkd_lst::Node *first, struct Lnkd_lst::Node *second ){

	Lnkd_lst::Node *res = NULL;
	Lnkd_lst::Node *temp, *head=NULL;

	while(first !=NULL || second != NULL){


		temp = new Lnkd_lst::Node;
		temp->data =(first?first->data:0) + (second?second->data:0);
			
		if(head==NULL)
			head=res;
	
		res = temp;
		res = res->next;
		if(first)
			first = first->next;
	       	if(second)
			second = second->next;
		
	}
	return head;

}

int main(){

	Lnkd_lst l0, l1;
	Lnkd_lst::Node* resH;
	Lnkd_lst res;

	l0.insert(22);
	l0.insert(2);
	l0.insert(2);

	l1.insert(13);
	l1.insert(3);
	l1.insert(1);

	cout << "L0:	" << endl;
	l0.disp();cout << endl;

	cout << "L1:	" << endl;
	l1.disp();cout << endl;

	resH = new Lnkd_lst::Node;

	resH = sunolst(l0.head, l1.head);

	res.head = resH;

	cout << "Res:	"<< endl;

	return 0;

}
