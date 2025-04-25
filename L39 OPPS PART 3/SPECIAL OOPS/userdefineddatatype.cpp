#include<iostream>
using namespace std;
int main(){
    class Student{
    public:
        int rollno;
        string name;
        float cgpa;
    };
    Student S1;//declaration
    S1.rollno = 40;//initialization (yaha pe apan normal input output dono kar sakte hain)
    S1.name = "Sanskar";
    S1.cgpa = 8.5;
    cout<<S1.rollno<<" "<<S1.name<<" "<<S1.cgpa<<endl;

    Student S2 = {7,"Dagade",9}; // method 2 for initialization (remember order must be same in this case)
    cout<<S2.rollno<<" "<<S2.name<<" "<<S2.cgpa<<endl;
}