// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

//1.Constructor
//2.Copy Constructor
//3.Copy Assignment
//4.Destructor
class Car {
	int price;
	int minimum = 2000;
public:
	int model;
	char name[100];
	string condition;
	char *fuel;

	Car() {
		cout << "Inside our own constructor " << endl;
	}
	Car(int m, char *n, string c, int p, char *z) {
		//cout << "Inside our second constructor" << endl;
		model = m;
		condition = c;
		strcpy(name, n);
		if (price < minimum) {
			price = minimum;
		} else {
			price = p;
		}
		fuel = new char[strlen(z) + 1];
		strcpy(fuel, z);
	}

	Car(Car &x) {
		//cout << "Inside our Own Copy Constructor " << endl;
		model = x.model;
		strcpy(name, x.name);
		price = x.price;
		condition = x.condition;
		fuel = new char[strlen(x.fuel) + 1];
		strcpy(fuel, x.fuel);
	}

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
		cout << "Fuel used is of the type " << fuel << endl;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	Car c(2, "BMW", "Good", 2010, "Petrol");
	Car d(c);
	//d.set_price(20000);


	d.fuel[0] = 'Z';


	d.name[0] = 'Z';
	d.print();
	c.print();



	return 0;
}