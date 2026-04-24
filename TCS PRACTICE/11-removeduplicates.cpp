#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int n = nums.size();
    if (n == 0)return 0;
    sort(nums.begin(),nums.end());
    int index = 0;
    for(int i=1;i<n;i++){
        if(nums[i] != nums[i-1]){
            nums[index] = nums[i];
            index++;
        }
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
    cout << "Array after removing duplicates: ";

    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}