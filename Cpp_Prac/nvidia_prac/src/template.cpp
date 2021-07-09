#include<iostream>
#include<string>
#include<map>
#include<time.h>

using namespace std;

int main(){

	map<int, string> x;

	x.insert(pair<int, string>(1, "Hello"));
	x.insert(pair<int, string>(1, "Hello"));

	map<int, string>::iterator itr;

	for(itr = x.begin(); itr != x.end(); itr++){
	
		cout << itr->first << " " << itr-> second << endl;

	}
	return 0;

}
