#include<iostream>
#include<bits/stdc++.h>

#define N 4
#define M 4

using namespace std;

class Qitem {

	public:

	int row;
	int col;
	int dist;

	Qitem(int x, int y, int w): row(x), col(y), dist(w){
	

	}

};

int minDistance(char grid[N][M]){

	Qitem source(0, 0, 0);
//	bool** visited;

	bool visited[N][M];
//	for(auto i=0; i<M; i++)
//	*visited = new bool(N);

	for(int i=0; i < N; i++){
	
		for(int j=0; j < M; j++){
		
			if(grid[i][j] == '0')
				visited[i][j]=true;
			else
				visited[i][j]=false;

			if(grid[i][j]=='s'){
			
				source.row = i;
				source.col = j;

			}

		}	

	}	

	queue<Qitem> q;
	q.push(source);
	visited[source.row][source.col] = true;

	while(!q.empty()){
	
		Qitem p = q.front();
		q.pop();

		if(grid[p.row][p.col] == 'd')
			return p.dist;

		if(p.row - 1 >= 0 && visited[p.row + 1][p.col] == false){

			q.push(Qitem(p.row + 1, p.col, p.dist + 1));
			visited[p.row + 1][p.col] = true;

		}

		if(p.row + 1 < N && visited[p.row + 1][p.col] == false){
		
			q.push(Qitem(p.row+1, p.col, p.dist + 1));
			visited[p.row + 1][p.col] = true;

		}

		if(p.col - 1>=0 && visited[p.row][p.col + 1] == false){
		
			q.push(Qitem(p.row, p.col - 1, p.dist + 1));
			visited[p.row][p.col - 1] = true;

		}

		if(p.col + 1 < M && visited[p.row][p.col + 1] == false){
		
			q.push(Qitem(p.row, p.col + 1, p.dist + 1));
			visited[p.row][p.col + 1] = true;

		}

	}
	return -1;

}

int main(){

	char grid[N][M] = {{'0', '*', '0', 's'},
			   {'*', '0', '*', '*'},
			   {'0', '*', '*', '*'},
			   {'d', '*', '*', '*'}};

	cout << minDistance(grid);

	return 0;

}
