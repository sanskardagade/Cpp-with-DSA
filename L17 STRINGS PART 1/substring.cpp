#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcdef";
    // s.substr(idx,len)
    cout<<s.substr(2,2)<<endl;
    cout<<s.substr(2);
}