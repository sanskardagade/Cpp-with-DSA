#include <bits/stdc++.h>
using namespace std;

// function to find max people
int maxPeople(vector<int> &w, int n, int Y) {
    sort(w.begin(), w.end());

    int count = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (sum + w[i] <= Y) {
            sum += w[i];
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    int n, Y;

    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input";
        return 0;
    }

    vector<int> w(n);

    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    cin >> Y;

    if (Y < 0) {
        cout << "Invalid input";
        return 0;
    }

    cout << maxPeople(w, n, Y);

    return 0;
}