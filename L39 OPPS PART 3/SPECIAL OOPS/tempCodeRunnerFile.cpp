#include<iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    float cgpa;
};
void print(Student S){
    cout<<S.rollno<<" "<<S.name<<" "<<S.cgpa<<endl;
}
int main(){
    
    Student S1;//declaration
    S1.rollno = 40;//initialization (yaha pe apan normal input output dono kar sakte hain)
    S1.name = "Sanskar";
    S1.cgpa = 8.5;
    print(S1);

    Student S2 = {7,"Dagade",9}; // method 2 for initialization (remember order must be same in this case)
    print(S2);
}