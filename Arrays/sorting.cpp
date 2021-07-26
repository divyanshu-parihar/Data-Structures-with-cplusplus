#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n) {
    int counter = 0, temp;
    while (counter < n - 1) {
        for (int i = 0; i < n - counter - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}

void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

void selectionSort(int *arr, int n) {
    //  5 7 3 8 2 -> min 2
    // cout<< 'here';
    int min, temp;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
// <-------------merge sort O(NlogN) Start--------->

void merge(int A[], int mid, int low, int high) {
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            B[k] = A[i];
            i++;
            k++;
        } else {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid) {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high) {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i < high; i++) {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, mid, low, high);
    }
}

// <---------------- merge sort END--------------->
void printArray(int *A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}
