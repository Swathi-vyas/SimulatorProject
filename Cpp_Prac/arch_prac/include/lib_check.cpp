
#include<iostream>
#include"Stack.h"

using namespace std;

int main(){

	Stack s0(5);
	int i=0;
	
	while(!s0.isFull())
		s0.push(i++);

	while(!s0.isEmpty())
		cout << s0.pop() << endl;
	return 0;
}
