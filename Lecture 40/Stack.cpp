#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
template<typename T>


class Stack {
public:
    int top_element;
    T a[MAX];

    Stack() {
        top_element = -1;
    }

    void push(T x) {
        if (top_element >= (MAX - 1)) {
            return;
        }
        else {
            a[++top_element] = x;
            return;
        }
    }

    void pop() {
        if (top_element < 0) {
            return;
        }
        else {
            top_element--;
        }
    }

    T top() {
        if (top_element < 0) {
            return 0;
        }
        else {
            T x = a[top_element];
            return x;
        }
    }

    bool isEmpty() {
        return (top_element < 0);
    }
};



int main() {
    Stack<string>s;
    s.push("Mayank");
    s.push("Samyak");
    s.push("30");
    s.pop();

    cout << s.top() << " " << endl;


    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
