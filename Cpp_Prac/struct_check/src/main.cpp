#include<iostream>

using namespace std;

struct struct_check{

	int x;
	int y=0;
};

enum Check{
	x=1, y=2

};

int main(){

	int i;

	Check check;
	struct_check scheck;

	check=x;

	for( i=0; i<10; i++){

		cout << check << endl;
		cout << scheck.y << endl;
			
	}

	return 00000;

}
