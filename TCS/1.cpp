#include <bits/stdc++.h>
using namespace std;

// function to sort pairs
void sortPairs(vector<pair<int,int> > &v) {
    sort(v.begin(), v.end()); // default sorting (no comparator needed)
}

int main() {
    int n;

    // input + validation
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input";
        return 0;
    }

    vector<pair<int,int> > v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sortPairs(v);

    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second;
        if (i != n - 1) cout << " ";
    }

    return 0;
}