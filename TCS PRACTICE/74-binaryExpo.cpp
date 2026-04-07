// #include<bits/stdc++.h>
// using namespace std;
// long long power(long long x,long long n){
//     long long ans = 1;
//     while(n>0){
//         if(n%2==1){
//             ans *= x;
//         }
//         x *= x;
//         n /= 2;
//     }
//     return ans;
// }

// int main(){
//     long long x, n;
//     cin >> x >> n;
//     cout << power(x, n);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, n;
    cin >> x >> n;
    long long ans = 1;
    for(int i = 0; i < n; i++){
        ans *= x;
    }
    cout << ans;
    return 0;
}