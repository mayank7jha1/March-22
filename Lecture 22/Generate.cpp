#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void Convert(int n, int i, char* output, int open_count, int close_count) {
	if (i == 2 * n) {
		output[i] = '\0';
		cout << output << endl;
		return;
	}

	if (close_count < open_count) {
		output[i] = ')';
		Convert(n, i + 1, output, open_count, close_count + 1);
	}
	if (open_count < n) {
		output[i] = '(';
		Convert(n, i + 1, output, open_count + 1, close_count);
	}
}

int main() {
	int n;
	cin >> n;
	char output[2 * n + 1];
	Convert(n, 0, output, 0, 0);
}