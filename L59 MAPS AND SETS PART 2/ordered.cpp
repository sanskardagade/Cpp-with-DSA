#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }

    map<string,int>m;
    m["Raghav"] = 27;
    m["Sanskar"] = 12;
    m["Dagade"] = 14;
    for(auto x : m){
        cout<<x.second<<" ";
        cout<<x.first<<" ";
        cout<<endl;
    }
}
