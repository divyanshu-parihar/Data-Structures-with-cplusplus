#include <bits/stdc++.h>
using namespace std;
//  linear search in 2d arrays.
bool linearSearch(int *arr,int n,int m , int val){
    for(int i = 0;i<n;i++){
        for(int j  = 0; j < m;j++){
            if(*(arr+i+m+j) == val){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int n, m,x;

    cin >> n >> m >> x;
    int arr[4][4];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int newArr[] = {1,2 ,3,4,5,6};
    cout << linearSearch((int*) arr,n,m,x);
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << arr[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    return 0;
}