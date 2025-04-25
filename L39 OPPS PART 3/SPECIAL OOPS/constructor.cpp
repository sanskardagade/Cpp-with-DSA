#include<iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    float cgpa;
    Student(){//default constructor

    }
    Student(string x,int y,float z){
        cgpa = z;
        rollno = y;
        name = x;
    }
    Student(int y,float z,string x){//We can create multiple constructors
        cgpa = z;
        rollno = y;
        name = x;
    }
};
int main(){   
    //Student S1 = {7,"Dagade",9}; 
     
    Student S2 = Student("Gagan",90,9.2);
    Student S3;
    S3.cgpa = 8.5;
    S3.name = "Roshan";
    S3.rollno = 2;
    Student S4 = Student(12,9.8,"Siddhi");
    
}