#include<iostream>
#define MATRIX_SIZE 8

using namespace std;

int main(int argc, char **argv){

	int arr[MATRIX_SIZE][MATRIX_SIZE];
	int size=MATRIX_SIZE;
	int elem;

	//arr = new int*[size];
/*
	for(auto i=0; i<size; i++){
		arr[i]=new int[size];
	}
*/
		
	elem=arr[0][0]%2;

	for(auto i=0; i<size; i++){
		elem=(elem+i)%2;

		for(auto j=0; j<size; j++){
			arr[i][j]=(elem+j)%2;
		}
	}

	for(auto i=0; i<size; i++){
		for(auto j=0; j<size; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	cout << size;
}

