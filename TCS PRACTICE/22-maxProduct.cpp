#include<bits/stdc++.h>
using namespace std;

int product(vector<int>& arr){
    int n = arr.size();
    int maxProduct = arr[0];
    
    for(int i=0;i<arr.size();i++){
        int prod = 1;
        for(int j=i;j<arr.size();j++){
            prod *= arr[j];
            maxProduct = max(maxProduct,prod);
        }
    }
    return maxProduct;
}

int main() {
    vector<int> nums = {1,2,-3};
    cout << product(nums);
    return 0;
}