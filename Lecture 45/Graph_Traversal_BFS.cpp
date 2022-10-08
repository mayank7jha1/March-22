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

	void bfs(int scr) {
		map<T, bool>visited;
		queue<int>q;
		q.push(scr);
		visited[scr] = true;
		while (!q.empty()) {
			T vertex = q.front();
			cout << vertex << endl;
			q.pop();

			for (auto nbrs : l[vertex]) {
				if (!visited[nbrs]) {
					q.push(nbrs);
					visited[nbrs] = true;
				}
			}
		}
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
	int scr;
	cin >> scr;
	g.bfs(scr);
}