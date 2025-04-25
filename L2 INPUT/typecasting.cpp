#include<iostream>
using namespace std;
int main(){
    // int , float , bool , char  ko interchange karne ke liye typecasting kam aati hain
    char ch = 'W';
    int x = (int)ch;
    cout<<x-64;
}