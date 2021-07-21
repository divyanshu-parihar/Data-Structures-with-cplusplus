#include <iostream>
#include <climits>
using namespace std;
// Q1. Given an arr[] of size n . for every i from o to n-1
// output max(a[0],a[1],...a[i])
int maxVal(int *arr, int n)
{
    int MAX_VAL = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > MAX_VAL)
        {
            MAX_VAL = arr[i];
        }
    }
    return MAX_VAL;
}
// 1 1 2 1 2 2 2 2 2
// Q2 . Given an array a[] of size n. output sum of each subarray of given array.
int sumOfSubarray(int *arr, int n)
{
    int sum = 0;
    int counter = 0;
    while (counter <= n)
    {
        for (int i = counter; i < n; i++)
        {
            sum = sum + arr[i];
        }
        counter++;
    }
    return sum;
}
// Q3 imp.(KickStart) -> given an array return the  length of longest subarrys with elements in equal diff. AP.
int lengthOfLongestSubArray(int *a,int n){
    int ans = 2;
    int pd = a[1] -a[0];
    int i= 2;
    int curr = 2;

    while(i< n)
    {
        if(pd == a[i] -a[i-1]){
            curr++;
        }else{
            pd = a[i] - a[i -1];
            curr =2;
        }
        ans = max(ans,curr);
        i++;
    }

}





int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sumOfSubarray(arr, n);
    // for(int i=0; i<n; i++){
    //     cout << arr[i] <<' ';
    // }

    return 0;
    return 0;
}