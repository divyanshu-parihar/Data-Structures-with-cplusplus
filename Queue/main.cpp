#include <bits/stdc++.h>
using namespace std;
// // OPERATIONS
// enqueue
// dequeue
// peek
// is_empty
#define n 100

// QUEUE implementations with arrays.
class Que {
    int data;
    int front;
    int back;
    int* arr;

   public:
    Que() {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x) {
        if (back == n - 1) {
            cout << "QUEUE overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1) {
            front++;
        }
    }

    void pop() {
        if (front == -1 || front > back) {
            cout << "no elements in queue" << endl;
            return;
        }
        front++;
    }
    int peek() {
        if (front == -1 || front > back) {
            cout << "no elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty() {
        if (front == -1 || front > back) {
            return true;
        }
        return false;
    }
};

// QUEUE implemtation with linked list;
class Node {
   public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class QueueLink {
    Node* front;
    Node* back;

   public:
    QueueLink() {
        front = NULL;
        back = NULL;
    }

    void push(int x) {
        Node* newNode = new Node(x);

        if (front == NULL) {
            front = newNode;
            back = newNode;

            return;
        }
        back->next = newNode;
        back = newNode;
    }

    bool empty() { return front == NULL; }

    void pop() {
        if (front == NULL || back == NULL) return;
        Node* todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek() {
        if (front == NULL) {
            return -1;
        }
        return front->data;
    }
};

// Queue implementation with Stacks

class QueStack {
    stack<int> s1;
    stack<int> s2;

   public:
    void push(int x) { s1.push(x); }

    int pop() {
        if (s1.empty() and s2.empty()) {
            return -1;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int top = s2.top();
        s2.pop();

        return top;
    }

    bool empty(){
        return s1.empty() and s2.empty();
    }

    int peek(){
        if(s1.empty()){
            return s2.top();
        }else{
            return s1.top();
        }
        return -1;
    }
};

int main() {
    QueStack que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);

    // cout << que.peek();
    que.pop();
    que.pop();
    que.pop();
    // que.pop();
    cout << que.empty() << endl;
    cout << que.peek() << endl;
    que.pop();
    cout << que.empty() << endl;
    cout << que.pop() << endl;
    return 0;
}