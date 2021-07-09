#include<iostream>

using namespace std;

int main(){

	int x=0xabababab;

	int y=0x0000ee00;

	x&=0xffff00ff;
	x|=y;

	cout << hex << x  << endl;

	return 0;
}

