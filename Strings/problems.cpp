#include <iostream>
#include <string>
using namespace std;

string changeCaseToUpper(string &str) {
    for (int i = 0; i < str.size(); i++) {
        if(str[i] >='a' && str[i] <='z'){
            str[i] -=32;
        }
    }
    return str;
}

int main() {
    string input;

    getline(cin, input);
    changeCaseToUpper(input);
    cout << input << endl;
    return 0;
}