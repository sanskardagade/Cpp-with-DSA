#include<bits/stdc++.h>
using namespace std;

void decimalToOctal(int n){
    if(n==0){
        cout<<0;
        return;
    }
    vector<int>octal;
    while(n>0){
        octal.push_back(n%8);
        n = n/8;
    }
    for(int i=octal.size()-1;i>=0;i--){
        cout<<octal[i];
    }
}

int main(){
    int n;
    cin >> n;

    decimalToOctal(n);

    return 0;
}