#include<iostream>
#include<list>
#include<cstring>

using namespace std;

class Hashtable{

	private:
		static const int hashGroups = 10;	
		list<pair<int, string>> table[hashGroups];
	
	public:
		//Hashtable();
		bool isEmpty();
		int hashFunction(int key);
		void insertItem(int key, string value);
		void removeItem(int key);
		string searchItem(int key);
		void printTable();

		//~Hashtble();
};

bool Hashtable::isEmpty(){

	int sum{};
	for(int i{}; i< hashGroups; i++){
		sum +=table[i].size();
	}

	if(!sum){
		return true;
	}
	return false;

}

int Hashtable::hashFunction(int key){
	return key % hashGroups;
}


void Hashtable::insertItem(int key, string value){

	int hashValue = hashFunction(key);
	auto& cell = table[hashValue];
	auto bItr = begin(cell);
	bool keyExists = false;

	for(; bItr !=end(cell); bItr++){
		if(bItr->first == key){
			keyExists = true;
			bItr->second = value;
			cout << "Existing key replaced" << endl;
			break;
		}
	}

	if(!keyExists){
		cell.emplace_back(key, value);
	}

	return;
}

void Hashtable::printTable(){

	for(int i{}; i < hashGroups; i++){
		if(table[i].size() == 0)continue;
		else {
		
			auto bItr = table[i].begin();
			for(; bItr !=table[i].end(); bItr++){
				cout << "[INFO] key: " << bItr->first << "Value: " << bItr->second << endl;
			}

		}
	}
}


int main(){

	Hashtable HT;

	if(HT.isEmpty()) cout << "Correct answer" << endl;
	else cout << "isEmpty function err" << endl;

	HT.insertItem(905, "Saagr");
	HT.insertItem(201, "Jim");
	HT.insertItem(332, "Bib");
	HT.insertItem(124, "Sally");
	HT.insertItem(107, "Sandy");
	HT.insertItem(929, "Barb");
	HT.insertItem(928, "Rick");

	HT.printTable();

	if(HT.isEmpty())	cout << "This is some error" << endl;
	else	cout << "Ran successfully" << endl;


}
