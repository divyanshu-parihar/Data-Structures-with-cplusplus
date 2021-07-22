#include <climits>
#include <iostream>
using namespace std;
// Q1. Given an arr[] of size n . for every i from o to n-1
// output max(a[0],a[1],...a[i])
int maxVal(int *arr, int n) {
    int MAX_VAL = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > MAX_VAL) {
            MAX_VAL = arr[i];
        }
    }
    return MAX_VAL;
}
// 1 1 2 1 2 2 2 2 2
// Q2 . Given an array a[] of size n. output sum of each subarray of given
// array.
int sumOfSubarray(int *arr, int n) {
    int sum = 0;
    int counter = 0;
    while (counter <= n) {
        for (int i = counter; i < n; i++) {
            sum = sum + arr[i];
        }
        counter++;
    }
    return sum;
}
// Q3 imp.(KickStart) -> given an array return the  length of longest subarrys
// with elements in equal diff. AP.
int lengthOfLongestSubArray(int *a, int n) {
    int ans = 2;
    int pd = a[1] - a[0];
    int i = 2;
    int curr = 2;

    while (i < n) {
        if (pd == a[i] - a[i - 1]) {
            curr++;
        } else {
            pd = a[i] - a[i - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        i++;
    }
    return ans;
}

// Q4 . Reverser Array
void reverseArray(int *arr, int n) {
    int start = 0, end = n - 1;
    int temp;
    while (start <= end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


// Q5 : Maximum and minimum of an array using minimum number of comparisons
void maxAndMinVal(int *arr, int n){
    int min = INT_MAX;
    int max = INT_MIN;
    if(n == 1){
        cout << arr[0];
    }
    for (int i = 0; i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
         if(arr[i] < min){
             min = arr[i];
         }
    }
    cout << max << endl;
    cout << min << endl;
}
//  Q6: Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
void kthSmallest(int *arr,int n,int k){
    int possibleAns[n];
    
    cout << arr[k-1];

}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    kthSmallest(arr, n,3);
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << ' ';
    // }

    return 0;
}