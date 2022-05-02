#include<iostream>
using namespace std;
// const int N = 0;

int main() {
	int n, total_time_provided;
	cin >> n >> total_time_provided;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int total_time_consumed = 0;
	int book_read = 0;
	int j = 0;

	for (int i = 0; i < n; i++) {
		total_time_consumed = total_time_consumed + a[i];
		book_read = book_read + 1;
		if (total_time_consumed > total_time_provided) {
			total_time_consumed = total_time_consumed - a[j];
			j = j + 1;
			book_read = book_read - 1;
		}
	}
	cout << book_read << endl;
}