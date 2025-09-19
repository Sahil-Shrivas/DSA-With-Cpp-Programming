#include <iostream>
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
        this->age = age;
    }

    void setScore(int score){
        this->score = score;
    }

    void setIsAlive(bool alive){
        this->alive = alive;
    }
};


int addScore(Player a, Player b){
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore() > b.getScore())
        return a;
    else 
        return b;
}

int main(){

    cout<<"\n\n\n\n";
    Player harsh;
    Player sahil;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    sahil.setAge(22);
    sahil.setScore(20);
    sahil.setIsAlive(true);
    sahil.setHealth(100);

    cout<<addScore(harsh, sahil) << endl;
    Player sanket = getMaxScorePlayer(harsh, sahil);
    cout<<sanket.getScore()<<endl;
    cout<<sanket.getHealth();
}