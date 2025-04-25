// #include<iostream>
// using namespace std;
// void change(int& a){
//      a = 10;
// }
// int main(){
//     int x = 5;
//     cout<<x<<endl;
//     change(x);
//     cout<<x<<endl;
// }
#include<iostream>
using namespace std;
void change(int* a){
    *a = 10;
}
int main(){
    int x = 5;
    cout<<x<<endl;
    change(&x);
    cout<<x<<endl;
}