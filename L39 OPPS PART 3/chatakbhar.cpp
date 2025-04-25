#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;

    //default constructor
    Bike(){
        cout<<"constructor call hua"<<endl;
    }
};
int main(){
    Bike tvs; //object creation //constructor ko call lagegi
    Bike Honda;
} 