// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

class Car {
	int price;
	int minimum = 2000;
public:
	int model;
	char name[100];
	string condition;

	// float get_discount(float x) {
	// 	price = price * (1.0 - x);
	// 	return price;
	// }

	void apply_discount(float x) {
		price = price * (1.0 - x);
	}

	int get_price() {
		return price;
	}

	void set_price(int x) {
		if (x < minimum) {
			price = minimum;
		} else {
			price = x;
		}
	}

	void print() {
		cout << "Name of the Car is " << name << endl;
		cout << "Price of the Car is " << price << endl;
		cout << "Model of the Car is " << model << endl;
		cout << "Condition of the Car is " << condition << endl;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << sizeof(Car) << endl;
	Car c;
	cout << sizeof(c) << endl;

	c.model = 2;
	//c.price = 2000;
	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.name[3] = '\0';
	c.condition = "Good";

	//cout << c.get_discount(0.1);
	//c.print();
	// c.apply_discount(0.1);
	// cout << c.get_price();

	c.set_price(3010);
	c.print();



	return 0;
}