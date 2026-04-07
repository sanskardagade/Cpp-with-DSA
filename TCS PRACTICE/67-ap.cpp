#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, d;
    cin >> n >> a >> d;
    int sum = (n * (2*a + (n-1)*d)) / 2;
    cout << sum;
    return 0;
}