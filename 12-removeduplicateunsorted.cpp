#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    set<int> s;

    // insert all elements
    for(int i = 0; i < nums.size(); i++) {
        s.insert(nums[i]);
    }

    int index = 0;

    // copy back to vector
    for(set<int>::iterator it = s.begin(); it != s.end(); it++) {
        nums[index] = *it;
        index++;
    }

    return index;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k = removeDuplicates(nums);

    cout << "k = " << k << endl;

    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}