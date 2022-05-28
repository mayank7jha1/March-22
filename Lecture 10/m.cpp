#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void swap1(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << x << " " << y << endl;
	return;
}

/*
	a=10,b=20;
	a=a^b; 10^20;
	b=a^b; 20^(10^20);
	a=a^b; 10^20^10;

	a=a+b;
	b=a-b;
	a=a-b;

*/

int main() {
	int x, y;
	cin >> x >> y;
	//swap(x, y);
	swap1(x, y);
	cout << "x is = " << x << endl;
	cout << "y is = " << y << endl;
}