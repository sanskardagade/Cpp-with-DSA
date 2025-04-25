#include<iostream>
using namespace std;
void fun(int x,int y){
    cout<<"Address of function x "<<&x<<endl;
    cout<<"Address of function y "<<&y<<endl;
}
int main(){
    int x = 3;
    int y = 7;
    cout<<"Address of main x "<<&x<<endl;
    cout<<"Address of main y "<<&y<<endl;
    fun(x,y);
}