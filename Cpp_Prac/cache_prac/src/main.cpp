#include<sstream>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
#include<bitset>
#include<stdio.h>
#include<map>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main(){

	ifstream traces;
	ofstream tracesout;
	
	string infile, line;

	infile = "traces.txt";
	
	traces.open(infile);

	while(traces.is_open()){
	
		getline(traces, line);
		if(line=="\0"){
			traces.close();	
			break;
		}	
		cout << line << endl;
	}
	 
	return 0;

}
