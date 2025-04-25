#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer : ";
    int n;
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            cout<<"Number is divisible by 3 and 5";
        }
        else{
             cout<<"Number is not divisible by 3 and 5";
        }
    }
    else{
         cout<<"Number is not divisible by 3 and 5";
    }
    
}

