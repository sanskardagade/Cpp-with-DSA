// #include<bits/stdc++.h>
// using namespace std;

// bool isPerfect(int n){
//     int sum = 0;

//     for(int i = 1; i < n; i++){
//         if(n % i == 0){
//             sum += i;
//         }
//     }

//     return sum == n;
// }

// int main(){
//     int n;
//     cin >> n;

//     if(isPerfect(n)){
//         cout << "Perfect Number";
//     } else {
//         cout << "Not Perfect Number";
//     }

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n){
    if(n<=1)return false;
    int sum = 1;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            sum += i;
            if(i!=n/i){
                sum += n/i;
            }
        }
    }
    return sum == n;
}

int main(){
    int n;
    cin >> n;

    if(isPerfect(n)){
        cout << "Perfect Number";
    } else {
        cout << "Not Perfect Number";
    }

    return 0;
}