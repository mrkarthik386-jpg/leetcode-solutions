#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {

        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                return false;
            }

            char top = st.top();
            st.pop();

            if (c == ')' && top != '(')
                return false;

            if (c == '}' && top != '{')
                return false;

            if (c == ']' && top != '[')
                return false;
        }
    }

    return st.empty();
}

int main() {

    // Test Case 1
    string s1 = "()[]{}";
    cout << "Test Case 1: "
         << (isValid(s1) ? "true" : "false") << endl;

    // Test Case 2 - edge case
    string s2 = "(]";
    cout << "Test Case 2: "
         << (isValid(s2) ? "true" : "false") << endl;

    return 0;
}