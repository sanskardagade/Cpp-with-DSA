#include<iostream>
using namespace std;
int main(){
//     int a , b;
//     cout<<"Enter 1st number :";
//     cin>>a;
//     cout<<"Enter 2nd number :";
//     cin>>b;
//     int power = 1;
//     for(int i=1; i<=b; i++){
//         power = power*a;
//     }
//     cout<<a<<" raised to power "<<b<<" is "<<power;
    
// }

    int a , b;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2nd number :";
    cin>>b;
    bool flag = true; //true means positive power 
    if(b<0){
        flag = false;  //false means negative numbebr 
        b = -b;
    }
    float power = 1;
    for(int i=1; i<=b; i++){
        power = power*a;
    }
    if(flag==false){
        power = 1/power;
        b = -b;
    }
    if(a==0 && b==0) cout<<"Not defined";
    else cout<<a<<" raised to power "<<b<<" is "<<power;
    
}