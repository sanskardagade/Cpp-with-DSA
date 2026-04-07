#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int square = n * n;
    int temp = n;
    while(temp > 0){
        if(temp % 10 != square % 10){
            cout << "Not Automorphic";
            return 0;
        }
        temp /= 10;
        square /= 10;
    }
    cout << "Automorphic";

    return 0;
}