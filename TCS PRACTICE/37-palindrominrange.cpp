#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int original = n;
    int rev = 0;

    while(n>0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev == original;
}

int main(){
    int min,max;
    cin>>min>>max;
    for(int i=min;i<=max;i++){
        if(isPalindrome(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}