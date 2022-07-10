#include<bits/stdc++.h>
using namespace std;
#define int long long
bool visited[1001][1001], solution[1001][1001];

bool RatInMaze(char maze[][1001], int i, int j, int m, int n) {
	if (i == m and j == n) {
		solution[i][j] = 1;
		for (int x = 0; x <= m; x++) {
			for (int y = 0; y <= n; y++) {
				cout << solution[x][y] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}


	if (visited[i][j] == 1) {
		return false;
	}

	visited[i][j] = 1;
	solution[i][j] = 1;

	if (j + 1 <= n and visited[i][j + 1] == 0) {
		bool rightans = RatInMaze(maze, i, j + 1, m, n);
		if (rightans == 1) {
			return true;
		}
	}
	if (i + 1 <= m and visited[i + 1][j] == 0) {
		bool downans = RatInMaze(maze, i + 1, j, m, n);
		if (downans == 1) {
			return true;
		}
	}
	solution[i][j] = 0;//Backtrack
	return false;
}





int32_t main() {
	int n, m;
	cin >> m >> n;
	char maze[1001][1001];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'X') {
				visited[i][j] = 1;
			}
		}
	}
	//m--, n--;
	int ans = RatInMaze(maze, 0, 0, m - 1, n - 1);
	if (ans == 0) {
		cout << "-1" << endl;
	}
}