#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void subsequences(char* in, char *output, int i, int j) {

	if (in[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	subsequences(in, output, i + 1, j);

	output[j] = in[i];
	subsequences(in, output, i + 1, j + 1);
}


int main() {
	char in[1000];
	cin >> in;
	char output[1000];

	subsequences(in, output, 0, 0);
}