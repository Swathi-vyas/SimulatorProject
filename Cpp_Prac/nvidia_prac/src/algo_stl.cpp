//#include<iostream>
#include<bits/stdc++.h>
//#include<random>
//#include<time.h>
//#include<algorithm>

using namespace std;

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
}

int generate_rand(void){

	srand(time(NULL));
	return rand() % 10;
}

int main(){
/*
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

	int size=sizeof(a)/sizeof(a[0]);

	show(a, size);
	cout << endl;

	sort(a, a+size);

	show(a, size);
	cout << endl;

	cout << generate_rand() << endl;

	string str;
	str="Hello";

	cout << str << endl;
*/
	vector<int> g1;

	int j=0;
	//g1.reserve(5);
	//g1.resize(4);
//	for(auto j=1; j <= 5; j++){
	for(auto i=0; i != 5; i++){
//	
		g1.push_back(++j);
//
	}
//	g1.resize(4);
	for(auto i=g1.cbegin(); i!=g1.cend(); i++)
		cout << *i << endl;
	
	cout << endl;
	g1.clear();
	for(auto i=g1.rbegin(); i!=g1.rend(); i++)
		cout << *i << endl;

	return 0;

}
