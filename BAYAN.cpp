#include <iostream>
#define size 50
using namespace std;

class Stack {
    int top;
    int array[size];
public:
    Stack() {
        top = -1;
    }

    void push(int item) {
        if (top == size - 1) {
            cout << "Stack overflow" << endl;
            return;
        } else {
            top++;
            array[top] = item;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return 0;
        } else {
            int data = array[top];
            top--;
            return data;
        }
    }

    void display() {
        while (top != -1) {
            cout << pop() << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int i, n, item;
    cout << "How many items? ";
    cin >> n;
    cout << "Enter values: ";
    for (i = 0; i < n; i++) {
        cin >> item;
        s.push(item);
    }
    cout << "Stack contents: ";
    s.display();
    return 0;
}

