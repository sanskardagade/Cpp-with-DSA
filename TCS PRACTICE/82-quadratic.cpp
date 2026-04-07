#include<bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;

    double D = b*b - 4*a*c;

    if(D > 0){
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);

        cout << "Roots are real and different: ";
        cout << x1 << " " << x2;
    }
    else if(D == 0){
        double x = -b / (2*a);

        cout << "Roots are real and same: ";
        cout << x << " " << x;
    }
    else{
        double real = -b / (2*a);
        double imag = sqrt(-D) / (2*a);

        cout << "Roots are complex: ";
        cout << real << " + i" << imag << " , ";
        cout << real << " - i" << imag;
    }

    return 0;
}