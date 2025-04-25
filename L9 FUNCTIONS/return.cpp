#include<iostream>
#include<cmath>
using namespace std;
int sun(int x,int y){
    return x+y;    
}
int mini(int x,int y){
    int a;
    if(x<y) a = x; 
    else a = y;
    return a;
}
int main(){
    //cout<<sum(40,63);
    int x,y;
    cin>>x>>y;
    cout<<mini(x,y)<<endl;
    cout<<max(x,y)<<endl;
    cout<<sqrt(36);
}


