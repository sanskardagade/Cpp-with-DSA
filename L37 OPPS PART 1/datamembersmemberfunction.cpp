#include<iostream>
using namespace std;
class Player{
    public:
    int score; //data member
    int health;  
    void showHealth(){
        cout<<"Health is : "<<health<<endl;
    }
    void showScore(){
        cout<<"Score is : "<<score<<endl;
    }
};
int main(){
    Player amit;
    amit.score = 90;
    amit.health = 100;
    amit.showHealth();
    amit.showScore();
}