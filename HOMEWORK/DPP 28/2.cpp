//Print index of a given element in an array. If not present, print -1
#include<iostream>
using namespace std;
int index(vector<int>&v,int currIndex,int n,int key){
    if(currIndex == n) {
    return -1;
    }
    if(v[currIndex] == key) {
    return currIndex;
    }
    return index(v, currIndex+1, n, key);
}
int main(){   
    int n, key;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}