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
    return original == rev;
}

int main(){
    int n;
    cin>>n;
    if(isPalindrome(n))cout<<"number is palindrome";
    else cout<<"Number is not palindrome";
}
