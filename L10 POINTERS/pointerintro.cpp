#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* p = &x;

    cout<<&x<<endl;
    cout<<p<<endl;

    float y = 4.9;
    float* q = &y;

    cout<<&y<<endl;
    cout<<q<<endl;

    bool z = true;
    bool *r = &z;

    cout<<&z<<endl;
    cout<<r;
}