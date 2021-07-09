#include<iostream>

using namespace std;

int main(){

	int** arr;

	arr = new int*[32];
/*
	for(auto i=0; i<31; i++){
		arr[i]= new int[32];

	}
*/
	for(auto i=0; i<31; i++){
		arr[i][i]=1;
	}

	for(auto i=0; i<31; i++){
	
		for(auto j=0; j<31; j++)
			cout << arr[i][j] << " " ;
		cout << endl;
	}

	return 0;

}
