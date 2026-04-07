#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, r;
    int n;
    cin >> a >> r >> n;
    double sum;
    if(r == 1){
        sum = n * a;
    } else {
        sum = a * (1 - pow(r, n)) / (1 - r);
    }
    cout << sum;
    return 0;
}