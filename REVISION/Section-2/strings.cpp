#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Hello World";
    cout<<str<<endl;
    cout<<"Length of string : "<<str.length()<<endl;
    cout<<"Substring(0,5):" <<str.substr(0,5)<<endl;
    cout<<"Find World : "<<str.find("World")<<endl;

}