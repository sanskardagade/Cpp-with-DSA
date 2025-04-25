#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;
    public:
    void setScore(int s){
        score = s;
    }
    void Health(int h){
        health = h;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    Player sanskar;
    sanskar.setScore(10);
    cout<<sanskar.getScore()<<endl;;
}