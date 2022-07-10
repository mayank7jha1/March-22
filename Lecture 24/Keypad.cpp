#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void solve(char* in, char *output, int i, int j) {
	//Base Case:
	if (in[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	int digit = in[i] - '0';

	for (int k = 0; keypad[digit][k] != '\0'; k++) {
		output[j] = keypad[digit][k];
		solve(in, output, i + 1, j + 1);
	}
	return;
}

int main() {
	char in[1000];
	cin >> in;

	char output[1000];

	solve(in, output, 0, 0);


}