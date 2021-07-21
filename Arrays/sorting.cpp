#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    int counter = 0 ,temp;
    while(counter < n-1){
        for (int i=0; i < n - counter -1;i++){
            if(arr[i]> arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
}


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
    bubbleSort(arr,n);

    for(int i=0; i<n; i++){
        cout << arr[i] <<' ';
    }

    return 0;
}