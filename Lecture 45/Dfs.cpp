#include<bits/stdc++.h>
using namespace std;
template<typename T>


class Graph {
	map<T, list<T>>l;
public:
	void addEdge(T x, T y) {
		l[x].push_back(y);
		l[y].push_back(x);//Bidirectional and Unweighted Graph
	}


	void dfs_helper(T scr, map<int, bool>&visited) {
		cout << scr << " ";
		visited[scr] = true;

		for (auto nbrs : l[scr]) {
			if (!visited[nbrs]) {
				dfs_helper(nbrs, visited);
			}
		}
	}

	void dfs(T scr) {
		map<int, bool>visited;
		for (auto x : l) {
			visited[x.first] = false;
		}
		dfs_helper(scr, visited);
	}
};

int main() {

	Graph<int>g;
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		int weight;
		bool direction;
		cin >> x >> y;
		g.addEdge(x, y);
	}
	int scr, destination;
	cin >> scr >> destination;
	g.dfs(scr);
}