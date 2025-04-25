#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
       for (int k=1;k<=2*n;k++){
        if (k<=i || k>2*n-i){
               cout<<"*";
           }
        else{
               cout<<" ";
           }
           
       }
       cout<<endl;
   }
    for (int i=1;i<=n;i++){
        for (int s=1;s<=2*n;s++)
      {
        if (s>n-i+1 && s<=n+i-1)
          { cout<<" ";}
        else
          {cout<<"*";}
      }
      cout<<endl;
           
       }

   }

