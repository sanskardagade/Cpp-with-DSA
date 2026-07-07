#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxTastePoints(int n, int m, vector<int>& v, vector<int>& d) {
        priority_queue<pair<long long,int>> pq;
        // push initial values
        for(int i = 0; i < n; i++) {
            pq.push({v[i], i});
        }
        long long ans = 0;
        while(m-- && !pq.empty()) {
            auto top = pq.top();
            pq.pop();
            long long taste = top.first;
            int idx = top.second;

            // add current best taste
            ans += taste;

            // next value after buying again
            long long nextTaste = taste - d[idx];

            // push again if still positive
            if(nextTaste > 0) {
                pq.push({nextTaste, idx});
            }
        }

        return ans;
    }
};

int main() {
    int n, m;

    // Input number of dishes and number of purchases
    // cout << "Enter n and m: ";
    cin >> n >> m;

    vector<int> v(n), d(n);
    // Input initial taste values
    // cout << "Enter taste values: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Input decrease values
    // cout << "Enter decrease values: ";
    for(int i = 0; i < n; i++) {
        cin >> d[i];
    }

    Solution obj;

    long long result = obj.maxTastePoints(n, m, v, d);

    // cout << "Maximum Taste Points: " << result << endl;
    cout << result << endl;
    return 0;
}

