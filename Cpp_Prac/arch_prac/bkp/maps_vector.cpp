#include<iostream>
#include<map>
#include<vector>

using namespace std;

void map_func(){

	map<string, int> dict;
	string Names[10]={"Sagar", "Khushi", "Arpit", "Prit", "Chahat", "Nilay", "Bagdi", "Abhijeet", "Dhruv", "Akshay"};
	int i=0;

	for(auto i=0; i<sizeof(Names)/sizeof(Names[0]); i++){
		dict[Names[i]]=i;
	}


	for(map<string, int>::iterator it = dict.begin(); it != dict.end(); it++)
		cout << it->first << it->second << endl;
}

void vector_func(){
	vector<string> v1={ "Sagar", "Oza", "Dharmendrakumar"};
	for(vector<string>::iterator it = v1.begin(); it != v1.end(); it++)
		cout << *it << endl;
}

int main(){

	map_func();
//	vector_func();
	return 0;

}

