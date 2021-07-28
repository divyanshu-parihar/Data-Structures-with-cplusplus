#include <math.h>

#include <iostream>
#include <stack>
using namespace std;

void reverseString(string s) {
    stack<string> st;
    for (int i = 0; i < s.length(); i++) {
        string word = "";
        while (s[i] != ' ' && i < s.length()) {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << endl;
}
// reverse a stack
void insertAtBottom(stack<int> &st, int ele) {
    if (st.empty()) {
        st.push(ele);
        return;
    }
    int topele = st.top();
    st.pop();
    insertAtBottom(st, ele);
    st.push(topele);
}
void reverseStackRecursive(stack<int> st) {
    if (st.empty()) {
        return;
    }
    int ele = st.top();
    st.pop();
    reverseStackRecursive(st);
    insertAtBottom(st, ele);
}

int prfixEvaluation(string s) { // O(l) where l is the length of the string
    stack<int> st;
    for (int i = s.length()-1; i >= 0; i--) {
        if (s[i] >= '0' && s[i] <= '9') {
            st.push(s[i] - '0');
        } else {
            int opt1 = st.top();
            st.pop();
            int opt2 = st.top();
            st.pop();

            switch (s[i]) {
                case '+':
                    st.push(opt1 + opt2);
                    break;
                case '-':
                    st.push(opt1 - opt2);
                    break;
                case '/':
                    st.push(opt1 / opt2);
                    break;
                case '*':
                    st.push(opt1 * opt2);
                    break;
                case '^':
                    st.push(pow(opt1 , opt2));
                    break;
            }
        }
    }
    return st.top();
}
int main() {
    // string s ="Hey, How are you doing?";
    // reverseString(s);

    cout << prfixEvaluation("-+7*45+20") << endl;
    return 0;
}