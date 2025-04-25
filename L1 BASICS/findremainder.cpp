#include<iostream>
using namespace std;
int main(){
    int a = 14; // a means dividend
    int b = 3;  // b is divisor
    int q =a/b; // q is quotient
    int r;      // r is remainder
    // a = (b*q) + r
    r = a - (b*q) ;  //dividend=(divisor*quotient) +remainder
    cout<<r<<endl;

    r=a%b;
    cout<<r;
 
}