#include<bits/stdc++.h>
using namespace std;

string ones[] = {"", "one", "two", "three", "four", "five", "six",
                 "seven", "eight", "nine", "ten", "eleven", "twelve",
                 "thirteen", "fourteen", "fifteen", "sixteen",
                 "seventeen", "eighteen", "nineteen"};

string tens[] = {"", "", "twenty", "thirty", "forty", "fifty",
                 "sixty", "seventy", "eighty", "ninety"};

string convert(int n){
    string ans = " ";
    if(n>=1000){
        ans += ones[n/1000] + " thousand ";
        n %= 1000;
    }
    if(n>=100){
        ans += ones[n/100] + " hundred ";
        n %= 100;
    }
    if(n>=20){
        ans += tens[n/10] + " ";
        n %= 10;
    }
    if(n>0){
        ans += ones[n] + " ";
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << convert(n);

    return 0;
}