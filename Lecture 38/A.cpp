#include<iostream>
#include "vector.h"
using namespace std;


int main() {
	vector<string>v;
	v.push_back("mayank");
	v.push_back("samas");
	v.push_back("asnkanm");
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	cout << v.capacity() << endl;
}