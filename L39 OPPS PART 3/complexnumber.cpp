#include<iostream>
using namespace std;
class ComplexNumber{
public:
    int real;
    int imaginary;
};
int main(){
    ComplexNumber a1,a2;
    a1.imaginary = 10;
    a1.real = 5;
    a2.imaginary = 15;
    a2.real = 200;
    ComplexNumber a3;
    a3.real = a1.real + a2.real;
    a3.imaginary = a1.imaginary + a2.imaginary;

    cout<<"real : "<<a3.real<<" "<<"imaginary : "<<a3.imaginary;

} 