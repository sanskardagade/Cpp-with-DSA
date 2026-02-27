#include <iostream>
#include <queue>
#include <bits/stdc++.h> // STL
using namespace std;

int main() {
    queue<int> q;
    q.push(5);
    q.push(1);
    q.push(7);

    cout << "Front element: " << q.front() << endl; // 5
    cout << "Back element: " << q.back() << endl;   // 7

    q.pop(); // removes 5

    cout << "Front element after pop: " << q.front() << endl; // 1
    cout << "Queue size: " << q.size() << endl;    
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // No 
    
    return 0;
}