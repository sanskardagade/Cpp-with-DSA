#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;   // number of test cases

    while(t--){
        long long n;
        cin >> n;

        long long result = (n * (n - 1)) / 2;

        cout << result << endl;
    }

    return 0;
}