#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int>p1;
    p1.first = "raghav";
    p1.second = 75;


    // pair<string,int>p2;
    // p2.first = "sanskar";
    // p2.second = 45;


    m["Sanskar"] = 45;


    // pair<string,int>p3;
    // p3.first = "unknown";
    // p3.second = 7;
    

    m["unknown"] = 7;


    m.insert(p1);
    //m.insert(p2);
    //m.insert(p3);
    // for(pair<string,int>p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    m.erase("unknown");

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }


    

}