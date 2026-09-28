#include <iostream>
#include <stack>
using namespace std;

string removeAdjacent(string str) {
    stack<char> st;

    for (char ch : str) {
        if (!st.empty() && st.top() == ch) {
            st.pop();  
        } else {
            st.push(ch);
        }
    }

    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

int main() {
    string str;
    cin >> str;

    cout << removeAdjacent(str);

    return 0;
}