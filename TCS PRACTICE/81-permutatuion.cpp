#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, r;
    cin >> n >> r;
    long long result = 1;
    for(int i = 0; i < r; i++){
        result *= (n - i);
    }
    cout << result;
    return 0;
}