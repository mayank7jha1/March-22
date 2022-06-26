#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	char ch[100];
	cin.getline(ch, 100);
	cout << strlen(ch);


	char *z = strtok(ch, " ");
	while (z != NULL) {
		cout << z << endl;
		z = strtok(NULL, " ");
	}

	string t;
	getline(cin, t);

	char *n = strtok((char*)t.c_str(), " ");
	while (n != NULL) {
		cout << n << endl;
		n = strtok(NULL, " ");
	}


}