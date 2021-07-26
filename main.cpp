#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
int main() {
    int n ;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i= 0;i<n;i++){
        cout << arr[i];
        string current = to_string(arr[i]);
        for(int j= current.length()-1 ;i<=0;j--){
            cout << current[j] ;

        }
        cout << endl;


    }
    
}
