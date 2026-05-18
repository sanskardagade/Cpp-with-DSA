#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumMSS(vector<int>& a, int k) {
        int n = a.size();
        int ans = INT_MIN;

        // try every subarray
        for(int l = 0; l < n; l++) {

            for(int r = l; r < n; r++) {

                vector<int> inside;
                vector<int> outside;

                int sum = 0;

                // split elements
                for(int i = 0; i < n; i++) {

                    if(i >= l && i <= r) {
                        inside.push_back(a[i]);
                        sum += a[i];
                    }
                    else {
                        outside.push_back(a[i]);
                    }
                }

                // smallest inside first
                sort(inside.begin(), inside.end());

                // biggest outside first
                sort(outside.rbegin(), outside.rend());

                int curr = sum;

                // perform useful swaps
                for(int t = 0; t < k; t++) {

                    if(t >= inside.size() || t >= outside.size())
                        break;

                    // profitable swap
                    if(outside[t] > inside[t]) {

                        curr -= inside[t];
                        curr += outside[t];
                    }
                }

                ans = max(ans, curr);
            }
        }

        return ans;
    }
};

int main() {

    int n, k;

    // cout << "Enter size of array: ";
    cin >> n;

    vector<int> a(n);

    // cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // cout << "Enter k: ";
    cin >> k;

    Solution obj;

    int result = obj.maximumMSS(a, k);

    cout << result << endl;

}
