#include<bits/stdc++.h>
using namespace std;
template<typename T>


class Graph {
	map<T, list<pair<T, int>>>l;
public:
	void addEdge(T x, T y, bool bidirectional, int w) {
		l[x].push_back(make_pair(y, w));
		if (bidirectional == 1) {
			l[y].push_back(make_pair(x, w));
		}
	}

	void printlist() {
		for (auto p : l) {
			T s = p.first;//It is node/vector/key
			list<pair<T, int>>nbrs = p.second;
			cout << "Vertex " << s << " : ";

			for (auto x : nbrs) {
				T s1 = x.first;//Neighbor
				int weight = x.second;
				cout << s1 << "->" << weight << ",";
			}
			cout << endl;
		}
	}
};

int main() {
	// Graph g;
	Graph<int>g;
	int n, m;
	//n = number of nodes
	//m= no of edges
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		int weight;
		bool direction;
		cin >> x >> y >> weight >> direction;
		g.addEdge(x, y, direction, weight);
	}
	g.printlist();
}