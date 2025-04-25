#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;

    Bike(int ts ,int es = 200) : tyreSize(ts),engineSize(es){}
};
int main(){
    Bike royalenfield(15,350);
    Bike bajaj(18);

    cout<<royalenfield.tyreSize<<" "<<royalenfield.engineSize<<endl;
    cout<<bajaj.tyreSize<<" "<<bajaj.engineSize<<endl;
}
