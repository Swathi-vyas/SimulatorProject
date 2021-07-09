#include<stdio.h>

int main(){

	int arr[8][8];
	int elem;

	elem=arr[0][0];

	for(int i=0; i<8; i++){
	
		for(int j=0; j<8;j++){
		
			elem=(elem+i)^1;
			arr[i][j]=elem;
		}

	}

	for(int i=0; i<8; i++){
	
		for(int j=0; j<8; j++)
			printf("%d ",arr[i][j]);
		printf("\n");

	}

	return 0;

}
