#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);

    s.erase(2);

    int target = 4;
    //s.find() -> it reaches in the set ,and if it is not found it return last element 
    if(s.find(target)!=s.end()){// target exists
        cout<<"exists"<<endl;
    }
    else  cout<<"doesnotexists"<<endl;
    cout<<s.size()<<endl;
    
    //for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }

}