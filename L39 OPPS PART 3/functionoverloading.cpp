#include<iostream>
using namespace std;
class Bike{
public:
    // int tyreSize;
    // int engineSize;  
    //Bike(int ts ,int es = 200) : tyreSize(ts),engineSize(es){} 
};
    void add(int a,int b){//function overloading //same name of function but different parameters
        cout<<a+b;
    }
    void add(int a){  //function overloading 
        cout<<10+a;
    }
int main(){
    // Bike royalenfield(15,350);
    // Bike bajaj(18);
    add(2);
    cout<<endl;
    add(3,7);
    // cout<<royalenfield.tyreSize<<" "<<royalenfield.engineSize<<endl;
    // cout<<bajaj.tyreSize<<" "<<bajaj.engineSize<<endl;
}

