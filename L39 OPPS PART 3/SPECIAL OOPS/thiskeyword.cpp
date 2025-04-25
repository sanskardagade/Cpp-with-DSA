#include<iostream>
using namespace std;
class Car{
public:
    int price;
    string name;
    void print(){//getter
        cout<<name<<" "<<price<<" "<<seats;
        cout<<endl;
    }
    Car(){

    }
    Car(int price,string name){
        (*this).price = price;//this->price = price;
        this->name = name;
    }
    Car(int price,string name,int seats){
        this->name = name;
        this->price = price;
        this->seats = seats;
    }
    void setSeat(int x){//setter
        seats = x;
    }
    int getSeat(){//getter
        return seats;
    }
private:
    int seats;
};
int main(){
    Car C1 = {1200000,"Kia Sonnet"};
    cout<<C1.name<<" "<<C1.price<<endl;
    Car C2 = {120,"Abc",4};
    C2.print();
    C1.setSeat(10);
    C1.print();
    cout<<C2.getSeat();
}