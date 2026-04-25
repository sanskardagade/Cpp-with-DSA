#include<bits/stdc++.h>
using namespace std;

void DecimaltoBinary(int n){
    vector<int>binary;
    while(n>0){
        binary.push_back(n%2);
        n = n / 2;
    }
    for(int i=binary.size()-1;i>=0;i--){
        cout<<binary[i];
    }
}

int main(){
    int n;
    cin >> n;
    DecimaltoBinary(n);
    return 0;
}