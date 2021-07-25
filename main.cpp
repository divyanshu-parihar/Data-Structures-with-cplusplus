#include <iostream>
using namespace std;
int main() {
    int a ,b,c;
    cin >> a >>b >>c;

    if(a==b&& b==c){
        cout << "1";

    }else if(a==b && b==c && c==a){
        cout << "2";
    }
    else if((a==b) & (a!=c)  || (a==c) & (a!=b) || (a==b) & (a!=c) || (c==b) & (c!=c)){
        cout << "3";
    }
}

