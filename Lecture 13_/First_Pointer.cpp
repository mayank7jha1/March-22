// Created by Mayank

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x = 10;
	cout << &x << endl;//Print the address
	//Pointers:
	int* xptr = &x;

	cout << &x << endl;
	cout << xptr << endl;

	char ch = 'A';
	cout << &ch << endl;

	char* chptr = &ch;
	cout << (void*)chptr << endl;



	return 0;
}