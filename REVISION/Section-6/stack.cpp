#include <iostream>
#include <stack>
#include <bits/stdc++.h> // STL
using namespace std;

int main() {
    stack<int> st;
    st.push(1);
    st.push(5);
    st.push(2);

    cout << "Top element: " << st.top() << endl; // 2
    st.pop();
    cout << "Top element after pop: " << st.top() << endl; //
    cout << "Size of stack: " << st.size() << endl; // 2
    cout << "Is stack empty? " << ( st.empty() ? "Yes" : "No" ) << endl; // No
    return 0;
}