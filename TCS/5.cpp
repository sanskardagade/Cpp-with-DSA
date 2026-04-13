#include <bits/stdc++.h>
using namespace std;

int countWays(int N, vector<int> &values, int endVal) {
    int R = values.size();

    int startIndex = -1, endIndex = -1;

    for (int i = 0; i < R; i++) {
        if (values[i] == 1) startIndex = i;
        if (values[i] == endVal) endIndex = i;
    }

    if (startIndex == -1 || endIndex == -1) return 0;

    vector<int> prev(R, 0);

    prev[startIndex] = 1;

    for (int i = 1; i < N; i++) {
        int total = 0;

        for (int j = 0; j < R; j++) {
            total += prev[j];
        }

        vector<int> curr(R, 0);

        for (int j = 0; j < R; j++) {
            curr[j] = total - prev[j];
        }

        prev = curr;
    }

    return prev[endIndex];
}

int main() {
    int N, R, endVal;

    cin >> N >> R;

    vector<int> values(R);
    for (int i = 0; i < R; i++) cin >> values[i];

    cin >> endVal;

    cout << countWays(N, values, endVal);

    return 0;
}