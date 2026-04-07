#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // check for 2
    if(n % 2 == 0){
        cout << 2 << " ";
        while(n % 2 == 0){
            n /= 2;
        }
    }

    // check for odd numbers
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0){
            cout << i << " ";
            while(n % i == 0){
                n /= i;
            }
        }
    }

    // if remaining n > 1 → prime
    if(n > 1){
        cout << n;
    }

    return 0;
}