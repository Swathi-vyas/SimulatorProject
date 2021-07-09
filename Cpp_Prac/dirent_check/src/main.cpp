#include<dirent.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int listdir(const char *path){

	struct dirent *entry;
	DIR *dp;

	dp=opendir(path);
	if(dp == NULL){
	
		perror("opendir");
		return -1;
	}

	while((entry = readdir(dp))){
		cout << entry->d_name << endl;
	}
	closedir(dp);
	cout << "done" << endl;
	//closedir(dp);
	return 0;

}

int main(int argc, char **argv){

	int cnt=1;
	listdir(argv[cnt]);
	return 0;
}
