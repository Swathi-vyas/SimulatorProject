#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>

void palindrome(char* str, int len){

	int l=0;
	int h=len-1;

	while(h>l){
	
		if(str[l++] != str[h--]){
			printf("l:%c[%d] h:%c[%d]", str[l], l, str[h], h);		
			printf("%s is not a palindrome", str);
			return;

		}
	}
	printf("%s is a palindrome", str);

}

using namespace std;

int main(){

	char* str;	int N;
	
	N=strlen("abba");
	str = new char(N);
	
	str = "abba";

	palindrome(str, N);

	cout << "\n N:" << N << endl;

	return 0;

}
