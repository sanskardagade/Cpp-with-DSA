#include <bits/stdc++.h>
using namespace std;

int calculateFee(int h) {
    if (h <= 2) return h * 100;
    if (h <= 5) return 200 + (h - 2) * 50;
    return 350 + (h - 5) * 20;
}

int main() {
    int hours;

    if (!(cin >> hours) || hours < 0) {
        cout << "Invalid input";
        return 0;
    }

    cout << calculateFee(hours);
    return 0;
}