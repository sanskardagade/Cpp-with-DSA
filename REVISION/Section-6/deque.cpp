#include <iostream>
#include <queue>
#include <bits/stdc++.h> // STL
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(5);
    dq.push_back(1);
    dq.push_front(7);
    dq.push_front(3);

    cout << "Front element: " << dq.front() << endl; // 3
    cout << "Back element: " << dq.back() << endl;   // 1

    dq.pop_back(); // removes 1
    dq.pop_front(); // removes 3

    cout << "Front element after pops: " << dq.front() << endl; // 7
    cout << "Back element after pops: " << dq.back() << endl;   // 5
    cout << "Deque size: " << dq.size() << endl;    
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl; // No
    
    return 0;
}