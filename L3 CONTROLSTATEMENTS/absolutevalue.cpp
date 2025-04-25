#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a integer : ";
    int n;
    cin>>n;
    if (n>0){
        cout<<n;
    }
    else{
        cout<<-n<<endl;
    }



    //OR
     cout<<"Enter a integer : ";
    int m;
    cin>>m;
    if (m<0){
        m=-m;
    }
    cout<<m;
       
}

