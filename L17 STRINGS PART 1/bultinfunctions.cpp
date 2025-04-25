#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str = "sanskar is learning from pw ";
    // cout<<str.length()<<endl;
    // cout<<str.size();

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;

    // string s = "sanskar";
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // cout<<s<<endl;

    // string s = " abc";
    // cout<<s<<endl;
    // s = s + "def";
    // cout<<s<<endl;

    string s = "abcdef";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;


}
