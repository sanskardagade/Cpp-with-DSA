#include<iostream>
class Player{
    public:
    int score;
    int health;
};
using namespace std;
int main(){
    Player sanskar;
    sanskar.health = 90;
    sanskar.score = 100;
    cout<<sanskar.score<<endl;
    cout<<sanskar.health;
}