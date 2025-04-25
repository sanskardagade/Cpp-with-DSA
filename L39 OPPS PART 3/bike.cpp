#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;

    //default constructor
    //values initialize karne ke liye
    Bike(int tyreSize,int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
    ~Bike(){
        cout<<"destructor call hua"<<endl;
    }
};
int main(){
    Bike tvs(12,500);//object creation //constructor ko call lagegi
    Bike honda(13,600);
    Bike bmw(15,700);
    bool flag = true;
    if(flag=true){
        Bike bajaj(17,1000);
        cout<<bajaj.tyreSize<<" "<<bajaj.engineSize<<endl;
    }
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
}
