#include<iostream>
using namespace std;
class Vehicle{//Base class,Parent class
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
};
class Car : public Vehicle{//Car inherits vehicle
public:
    int steerSize;
};
class Bike : public Vehicle{//Child class
public:
    int handleSize;
};
int main(){
    Bike honda;
    honda.handleSize = 5;
    honda.tyreSize = 15;
    honda.engineSize = 150;
    honda.lights = 2;
    cout<<honda.engineSize<<endl;
}