#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b>> c;
    int i ,j;
    i = max(a,b);
    j = max(i,c);
    // cout << j;
    if(j == c){
        cout <<  max(a,b);

    }else{
        if(i == a){
            cout << max(b,c);
        }else{
            cout << max(a,c);
        }
    }

    return 0;
}