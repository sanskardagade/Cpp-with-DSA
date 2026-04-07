#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxDigit = 0;
    int minDigit = 9;
    while(n>0){
        int digit = n % 10;
        if(digit>maxDigit)maxDigit=digit;
        if(digit<minDigit)minDigit = digit;
        n /= 10;
    }
    cout << "Largest digit: " << maxDigit << endl;
    cout << "Smallest digit: " << minDigit;

    return 0;
}