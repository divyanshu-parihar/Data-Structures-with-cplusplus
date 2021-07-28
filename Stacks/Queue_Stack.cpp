#include<bits/stdc++.h>
using namespace std;
// two methods 
// 1. Make push method costly
// 2. Make pop method costly

// 1.
class Stack{
    public:
    int N;
    queue<int> q1;
    queue<int> q2;

    Stack(){
        N =0;
    }
    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop(){
        q1.pop();
        N--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};


// 2. Making pop function costly
class Stack2{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    Stack2(){
        N = 0;
    }
    void pop(){
        if(q1.empty()){
            return;
        }
        while(q1.size() !=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void push(int val){
        q1.push(val);
        N++;
    }
    int top(){
        if(q1.empty()){
            return -1;
        }

        while(q1.size() !=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);

        queue<int > temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;

    }
    int size(){
        return N;
    }
};
int main(){
    Stack2 s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.top() << endl;

    return 0;
}