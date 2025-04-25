#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string :";
    cin>>str;
    int n = str.length();
    cout<<str.substr(n/2);
}