#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>
#include<stdlib.h>
#include<cmath>
#include<bitset>
#include<stdio.h>
#include<map>

using namespace std;

#define NA 0
#define RH 1
#define RM 2
#define WF 3
#define WM 4

struct config{
	unsigned long L1blocksize;
	unsigned long L1setsize;
	unsigned long L1size;
	unsigned long L2blocksize;
	unsigned long L2setsize;
	unsigned long L2size;
};

class cache{

	config config_params;
	unsigned long setIndexBit_L1, tag_L1, blockOffset_L1, setIndexBit_L2, tag_L2, blockOffset_L2;
	vector<vector<unsigned long>> cache_L1;
	vector<vector<unsigned long>> cache_L2;
	vector<vector<unsigned long>> validBit_L1, validBit_L2;

	public:
		cache(config config_params);
		vector<string> createCache(unsigned long &way, unsigned long &indexRow, unsigned long &blockSize);
		vector<string> getBits(bitset<32> addr);
		vector<vector<unsigned long>> getL1Cache();
		vector<vector<unsigned long>> getL2Cache();
		vector<vector<unsigned long>> getValidL1();
		vector<vector<unsigned long>> getValidL2();

};

map<unsigned long, bool> isWaysFull(vector<vector<unsigned long>> &L_cache, unsigned long way_L, long index_L);
void loadTag(vector<vector<unsigned long>> &L_cache, vector<vector<unsigned long>> &L_validBit, unsigned long &way_L, unsigned long &wayNumber, long &index_L, long tag_L);
unsigned long incCounter(unsigned long &way_L, unsigned long &wayNumber);

int main(int argc, char **argv){

	cout << "It works!!" << endl;

	return 0;
}
