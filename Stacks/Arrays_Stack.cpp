#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack {
    int top;

   public:
    int a[MAX];
    Stack() { top = -1; };
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        cout << "STACK OVERFLOW";
        return false;
    } else {
        top++;
        a[top] = x;
        cout << x << " pushed into stack \n";

        return true;
    }
}
int Stack::pop() {
    if (top < 0) {
        cout << "Stack is empty";
        return 0;
    } else {
        int x = a[top];
        top--;
        return x;
    }
}

int Stack::peek() {
    if (top < 0) {
        cout << "Stack underflow";
        return -1;
    } else {
        return a[top];
    }
}
bool Stack::isEmpty() { return (top < 0); }

int main() {
    Stack s = Stack();

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << s.pop() << "Popped from stack \n";

    cout << "Element present in Stack : ";
    while ((!s.isEmpty())) {
        cout << s.peek() << ' ';
        s.pop();
    }
    cout << endl;
    cout << s.isEmpty();
    return 0;
}