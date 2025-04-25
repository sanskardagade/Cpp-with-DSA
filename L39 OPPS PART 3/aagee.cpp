#include<iostream>
using namespace std;
class Bike{
public:
    static int noOfBikes;//this belongs to the class     
    int tyreSize;
    int engineSize;
    Bike(int tyreSize,int engineSize = 200){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
    static void increasenoOfBikes(){
        noOfBikes++;
    }
};
int Bike::noOfBikes = 10;//ye sabke liye same ban jayega abhi 
int main(){
    Bike tvs(12,500);//object creation //constructor ko call lagegi
    Bike honda(13);   
    tvs.increasenoOfBikes(); 
    cout<<tvs.noOfBikes<<endl;  
    cout<<honda.noOfBikes<<endl;  
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
}