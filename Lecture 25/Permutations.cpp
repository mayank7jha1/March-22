#include<bits/stdc++.h>
using namespace std;
const int N = 0;

void Permute(char* in, int i) {
	if (in[i] == '\0') {
		cout << in << endl;
		return;
	}


	for (int j = i; in[j] != '\0'; j++) {
		swap(in[i], in[j]);
		Permute(in, i + 1);
		swap(in[i], in[j]);// backteackin
	}
}


int main() {
	char in[1000];
	cin >> in;
	Permute(in, 0);
}