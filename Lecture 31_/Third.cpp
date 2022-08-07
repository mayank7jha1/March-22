// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int sum(int a) {
	return a;
}

float sum(int a, double b) {
	return a + b;
}

int sum(int a, int b) {
	return a + b;
}

float sum(int a , int b, double c) {
	return a + b + c;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout << sum(10, 20.2) << endl;

	return 0;
}