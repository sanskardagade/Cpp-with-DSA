#include<iostream>
using namespace std;
class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }

    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        Player::age = age;
    }
    void setScore(int score){
        Player::score= score;
    }
    void setisAlive(bool alive){
        Player::alive = alive;
    }
};
int addscore(Player a,Player b){
    return a.getScore()+b.getScore();
}
Player getMaxScorePlayer(Player a,Player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}
int main(){
    Player harsh;               //static allocation
    Player raghav;              // static allocation
    Player *urvi = new Player;  //runtime dynamic allocation 
    Player urviObject = *urvi;

    harsh.setAge(22);
    harsh.setScore(100);
    harsh.setHealth(200);
    harsh.setisAlive(true);

    raghav.setAge(220);
    raghav.setScore(1100);
    raghav.setHealth(100);
    raghav.setisAlive(true);

    (*urvi).setAge(23);
    urviObject.setHealth(100);
    urviObject.setScore(123);

    cout<<addscore(harsh,raghav)<<endl;
    Player sanket = getMaxScorePlayer(harsh,raghav);
    cout<<sanket.getScore()<<endl;
    cout<<sanket.getHealth()<<endl;
    cout<<urviObject.getScore()<<endl;
    cout<<urviObject.getHealth()<<endl;
}