#include <iostream>
using namespace std;

int linearSearch(int arr[], int val, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

int binarySearchRecursive(int arr[], int val, int first, int second)
{
    int mid = (first + second) / 2;
    if (arr[mid] > val)
    {
        second = mid - 1;
        return binarySearchRecursive(arr, val, first, second);
    }
    else if (arr[mid] < val)
    {
        first = mid + 1;
        return binarySearchRecursive(arr, val, first, second);
    }
    else
    {
        return mid;
    }
}
int binarySearchcIterative(int arr[], int val, int left, int right)
{
    while (left <= right)
    {
        int mid = left + (right - 1) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] < val)
        {
            left = mid + 1;
        }
        else if (arr[mid] > val)
        {
            right = mid - 1;
        }
    }
    return 0;
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
    int val;
    cin >> val;
    // cout << linearSearch(arr, val, n);
    cout << binarySearchcIterative(arr, val, 0, n - 1);

    return 0;
}