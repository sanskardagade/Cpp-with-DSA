#include<iostream>
using namespace std;
class Car{
public:
    int price;
    string name;
};
void change(Car* x){
    // (*x).name = "Honda Amaze";
    // (*x).price = 800000;
    x->name = "Honda Amaze";
    x->price = 800000;
    //a->b means (*a).b
}
int main(){
    Car C1 = {1200000, "Kia Sonnet"};
    cout<<C1.name<<" "<<C1.price<<endl;
    change(&C1); // yaha pe bhi  pass by value hua hain (& lagane se pass by reference hoga)
    cout<<C1.name<<" "<<C1.price<<endl;

}