#include<iostream>

using namespace std;


int main(){

	int ** ptr;

	ptr = new int*[ 2];

	for( auto i=0; i<4; i++)
		ptr[i]=new int[2];

	for(auto i=0; i<2; i++){
		for(auto j=0; j<2; j++)
			ptr[i][i]=i+j;
	}

	for(auto i=0; i<2; i++){
		for(auto j=0; j<2; j++){
			cout << ptr[i][j];	
		}	
		cout << endl;
	}

	delete ptr;
	
	return 0;

}
