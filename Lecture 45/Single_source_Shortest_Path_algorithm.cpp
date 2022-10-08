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

	void bfs(int scr, int destination) {
		map<T, int>distance;
		for (auto x : l) {
			distance[x.first] = INT_MAX;
		}
		queue<int>q;
		q.push(scr);
		distance[scr] = 0;

		while (!q.empty()) {
			T vertex = q.front();
			q.pop();

			for (auto nbrs : l[vertex]) {
				if (distance[nbrs] == INT_MAX) {
					q.push(nbrs);
					distance[nbrs] = distance[vertex] + 1;
				}
			}
		}
		cout << scr << "->" << destination << " = " << distance[destination];
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
	g.bfs(scr, destination);
}