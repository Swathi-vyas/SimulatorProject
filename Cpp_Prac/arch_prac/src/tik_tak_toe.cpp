#include<iostream>

using namespace std;

int main(){

	int** arr; int j;

	arr = new int*[8];

	for(auto i=0; i<8;i++){
		arr[i] = new int[8];	
	}

	for(auto i=0; i<8; i++){

		for(auto j=0; j<8; j++)
			arr[i][j]=(i+j+1)%2;
	}

	for(auto i=0; i<8; i++){
		for(auto j=0; j<8; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;

	}

	return 0;

}
