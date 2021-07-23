// Strins -->
// No need to know size beforehand.
// Performing operations like concatenation & append is easier.
// Terminated with a special character "\0"

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    getline(cin, name);

    // append to str
    // string methods;
    // insert 
    // sort
    // substr
    // compare
    // 
    //
    //
    //
    string s1 = "Fam";
    string s2 = "Fam";

    // s1.append(s2);
    // cout << s1+s2<< endl;
    // cout << name[2]<< endl;
    cout << s2.compare(s1) << endl;
    return 0;
}