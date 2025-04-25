#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int totalways = rightways + downways;
    return totalways;
}
void printpath(int sr, int sc, int er, int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec){//destination reached
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');//right
    printpath(sr+1,sc,er,ec,s+'D');//down
}
int main(){
    cout<<maze(0,0,10,7)<<endl;
    printpath(0,0,10,7,"");
}
