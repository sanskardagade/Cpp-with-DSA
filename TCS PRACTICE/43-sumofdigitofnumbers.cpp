// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     if(n == 0){
//         cout << 0;
//     } else {
//         cout << (n - 1) % 9 + 1;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    while(n>=10){
        int sum = 0;
        while(n>0){
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}
int main(){
    int n;
    cin >> n;
    cout << sumOfDigits(n);
    return 0;
}