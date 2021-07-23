#include <climits>
#include <iostream>
using namespace std;

bool checkPalamdrome(char *arr, int n) {
    bool check = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            check = 0;
            break;
        }
    }
    if (check) {
        cout << "word is palandrom";
    } else {
        cout << "word is not palandrom";
    }
    return check;
}

int longestWord(char sentence[], int n) {
    int max = INT_MIN;
    int start = 0 , end;
    int i;
    while( i< n) {
        int localMax = 0;
        if (sentence[i] = '\0') {
            break;
        }

        if(sentence[i] ==' ' || sentence[i]=='\0'){
            if(max < localMax)
                max = localMax;
            localMax =0;
        }else
            localMax++;
        i++;
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    // cin >> arr;
    cin.getline(arr,n);
    cin.ignore();
    int i = 0;
    // while(arr[i] != '\0'){
    //     cout <<arr[i] << endl;
    //     i++;

    // }
    // checkPalamdrome(arr, n);
    // cout << arr;
    cout << longestWord(arr,n);

    return 0;
}