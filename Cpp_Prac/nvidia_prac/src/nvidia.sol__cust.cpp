#include<iostream>
#include<stdlib.h>
#include<ds.h>

using namespace std;

struct Node{
	int data;
	Node* next;

//	Node *next();
};

struct Lnkd_lst::Node* sumoflist (struct Lnkd_lst::Node* first, struct Lnkd_lst::Node* second)
{
	struct Lnkd_lst::Node* result = NULL;
	struct Lnkd_lst::Node* temp, *prev = NULL;
	int carry=0;
	int sum;

	while (first != NULL || second != NULL)//	-->>	it should be ' && ' rather than ' || '
	{
		sum = /*carry +*/ (first ? first->data:0) + (second ? second->data : 0);

		//carry = (sum >= 10) ? 1:0;
		//sum = sum%10;
		temp = new Lnkd_lst::Node;
		temp->data = sum;	//	<<< Edited

		// if this is the first node
		if (result == NULL)
			result = temp;
		//	result = result->next;
		//	-->>	add this condition:
		//	else:
		//		result->next = temp
	
		// if not first then connect to rest
		else
			prev->next = temp;	//	-->>	??
		
		prev = temp;
		
		//cout <<  prev->data << endl;
		if (first)
			first = first->next;
		if (second)
			second = second->next;
	
//	return result;	// <<<<<< This shouldn't be here
	}
	return result;
}

int main(){

	Lnkd_lst l0, l1, res;

//	l0.insert(22);
//	l0.insert(2);
//	l0.insert(2);



	l1.insert(13);
	l1.insert(3);
	l1.insert(1);


	cout << "L0:" << endl;

	l0.disp();

	cout << endl;
	cout << "L1:" << endl;

	l1.disp();

	res.head = sumoflist(l0.head, l1.head);

	cout << endl;
	cout << "Res:"<< endl;
	res.disp();

	return 0;

}
