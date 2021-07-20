#include <iostream>
using namespace std;

int main()
{
    int n;
     cout << "Enter Size of array";
     cin >> n;
     int arr[n];
     for ( int i =0; i<n;i++){
         cout << "enter value for current index";
         cin >> arr[i];
     }

     for (int i = 0; i< n;i++){
         cout << arr[i];
     }
     return 0;



    //  pring left pyramid
     int n;
     cin >> n;
     for (int i =0; i<n; i++){
         for(int j =0 ; j< i;j++){
             cout << '*';
         }
         cout << '\n';

     }

    // Hollow Rectangle
    int row,col;
    cin >> row >> col;
    for (int i=1;i<row;i++){
        for(int j=1;i<col;j++){
            if(i==1 || i == row||j==1 || j==col){
                cout << '*';
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

}
