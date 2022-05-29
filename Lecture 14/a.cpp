#include<bits/stdc++.h>
#include<string>
using namespace std;
// const int N = 0;
/*
	Two Ways:
*/
/*int sum(int *a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + a[i];
	}
	return sum;
}

int sum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + a[i];
	}
	return sum;
}*/

/*
	Different ways to pass character arrays:
*/

/*int solve(char *a) {
	int sum = 0;
	for (int i = 0; a[i] != '\0'; i++) {
		sum = sum + (int)(a[i]);
	}
	return sum;
}

*/
/*int solve(char a[]) {

}*/


/*
	String passing case:
*/

int solve(string &str) {
	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		sum = sum + (int)str[i];
	}

	str[2] = 'B';
	cout << str << endl;

	return sum;
}

int main() {

	//This is to print a single character
	/*char ch;
	cin >> ch;
	cout << ch << endl;*/


	/*This is to print a set of character
	when you have a deliminator given and
	spaces or white spaces in the sentences
	are not there.*/

	/*char m;
	cin >> m;
	int len = 0;
	while (m != '@') {
		cout << m;
		len = len + 1;
		cin >> m;
	}
	cout << len << endl;*/

	/*This is to print a set of character
	when you have a deliminator not  given and
	spaces or white spaces in the sentences
	are not there.*/

	/*char ch;
	int len = 0;
	while (cin >> ch) {
		len++;
		cout << ch;
	}
	cout << len << endl;*/

	/*This is to print a set of character
	when you have a deliminator given and
	spaces or white spaces in the sentences
	are there hence we use .get() fuction.*/

	/*char ch;
	cin.get(ch);
	int len = 0;
	while (ch != '@') {
		cout << ch;
		len++;
		cin.get(ch);
	}
	cout << len << endl;*/

	/*This is to print a set of character
	when you have a deliminator not given and
	spaces or white spaces in the sentences
	are there and hence we use .get() function.*/

	/*char ch;
	int len = 0;
	while (cin.get(ch)) {
		len++;
		cout << ch;
	}
	cout << len << endl;*/


	//To deal with collections of characters
	//we decided to store it in character array.


	/*int a[] = {1, 2, 3, 4, 5};
	cout << sizeof(a) / sizeof(int) << endl;

	int b[100] = {1, 2, 3, 4, 5};
	cout << sizeof(b) / sizeof(int) << endl;
	*/

	//You have one element which is initialised with 0.
	//int c[] = {0};

	//You have 100 elements, of which every one is
	//initialised with 0.
	/*	int d[100] = {0};

		int e[5] = {1, 2, 0};


		char ch[] = {'A', 'B', 'C', 'D', '\0'};
		cout << sizeof(ch) / sizeof(char) << endl;*/

	/*Here if not for the NULL character we cannot
	find the length of the character array.*/

	/*char ch1[100] = {'A', 'B', 'C', 'D', '\0'};
	cout << sizeof(ch1) / sizeof(char) << endl;

	int len = 0;
	for (int i = 0; ch1[i] != '\0'; i++) {
		len++;
	}
	cout << len << endl;*/

	/*Size is imp.*/

	/*int n;
	cin >> n;
	int a[];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << a[2] << endl;*/

	/*
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
	*/

	/*
		Here white spaces will not be counted.
	*/

	// char ch[100];
	// cin >> ch;

	//You cannot take input like this
	/*for (int i = 0; (); i++) {

	}*/
	//cout << ch << endl;

	/*
		Since the above statement gives us the value
		rather than the address which is the case
		in integer array. If we want the address we
		can explict typecast or use the operator
		address of (&).
	*/

	//cout << &ch << " " << (int*)ch << endl;
	//But after taking input since you have
	//stored the characters you can take
	//the output in the form of loop as it
	//is also a array.
	/*int len = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		len++;
		cout << ch[i];
	}
	cout << len << endl;
	*/

	/*
		If you want include white spaces also.
	*/

	/*char ch[100005];
	cin.getline(ch, 100005);

	cout << ch << endl;

	for (int i = 0; ch[i] != '\0'; i++) {
		cout << ch[i];
	}*/


	/*
		getline parameters:
		1st parameter is name of character:
		2nd parameter is size you want to take
		input from the user.

		Similarly there is a third parameter also
		deliminator which is bydefault next line character
		which is this '\n' or endl but if we want to
		change we can also do so by adding one parameter.
	*/
	/*char ch[100005];
	//By defalut:
	//cin.getline(ch, 100005, '\n');
	cin.getline(ch, 10005, '@');

	cout << ch << endl;
	int len = 0;

	for (int i = 0; ch[i] != '\0'; i++) {
		len++;
		cout << ch[i];
	}
	cout << len << endl;*/


	/*White spaces will not be counted
	and the first space it encounters it stops.
	*/
	/*
		string s;
		cin >> s;
		cout << s << endl;
	*/

	/*string s;
	//By default
	getline(cin, s);
	//getline(cin, s, '@');

	cout << s << endl;

	cout << s.length() << endl;

	for (int i = 0; i < s.length(); i++) {
		cout << s[i];
	}*/

	/*
		int a[] = {1, 2, 3, 4, 5};
		int n = sizeof(a) / sizeof(int);
		cout << sum(a, n) << endl;*/

	/*Initialised using " "  symbol */
	/*char ch[] = {"Mayank"};
	string str = "Mayank";*/


	/*char ch[100];
	cin >> ch;
	cout << solve(ch);*/

	string s;
	cin >> s;
	cout << solve(s) << endl;
	cout << s << endl;



}