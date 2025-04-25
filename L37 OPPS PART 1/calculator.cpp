#include<iostream>
using namespace std;
class Calculator{
    public:
    int a;
    int b;
    void add(){
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b<<endl;
    }
};
int main(){
    Calculator Calci;
    Calci.a = 10;
    Calci.b = 7;
    Calci.add();
    Calci.subtract();
}