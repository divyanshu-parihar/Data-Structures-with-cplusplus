#include<iostream>
using namespace std;


void selectionSort(int *arr,int n){
    //  5 7 3 8 2 -> min 2
    // cout<< 'here';
    int min, temp;
    for(int i=0;i<n-1;i++){
        min = i;
        for (int  j= i+1; j < n; j ++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    }


}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n;i++) {
        cin >> arr[i] ;
    }
    selectionSort(arr,n);

    for(int i=0; i<n; i++){
        cout << arr[i] <<' ';
    }

    return 0;
}