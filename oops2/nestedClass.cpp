// #include <iostream>
// using namespace std;

// class Gun{
// public:
//     int ammo;
//     int damage;
//     int scope;
// };

// class Player{
// private:
//     class Helmet{
//         int hp;
//         int level;

//     public:
//         void setHp(int hp)
//         {
//             this->hp = hp;
//         }
//         void setLevel(int level)
//         {
//             this->level = level;
//         }

//         int getHp()
//         {
//             return hp;
//         }

//         int getLevel()
//         {
//             return level;
//         }
//     }
// };

// int health;
// int age;
// int score;
// int alive;
// Gun gun;
// Helmet helmet;

// public:
//     int getHealth(){
//         return health;
//     }

//     int getAge(){
//         return age;
//     }

//     int getScore(){
//         return score;
//     }

//     int isAlive(){
//         return alive;
//     }

//     Gun getGun(){
//         return gun;
//     }

//     void setHealth(int health){
//         this->health = health;
//     }

//     void setAge(int age){
//         this->age = age;
//     }

//     void setScore(int score){
//         this->score =score;
//     }

//     void setIsAlive(bool alive ){
//         this-> alive = alive;
//     }

//     void setGun(Gun gun){
//         this->gun = gun;
//     }

//     void setHelmet(int level){
//         Helmet *helmet = new Helmet;
//         helmet -> setLevel(level);
//         int health = 0;

//         if(level == 1)
//             health = 25;
//         else if(level == 2)
//             health = 50;
//         else if(level == 3)
//             health = 100;
//         else 
//             cout<<"error, invalid level!!";

//         helmet -> setHp(health);
//         this->helmet = *helmet;
//     }

//     void getHelmet(){
//         cout<<helmet.getHp()<<endl;
//         cout<<helmet.getLevel()<<endl;
//     };

// int addScore(Player a, Player b){
//     return a.getScore() + b.getScore();
// }

// Player getMaxScorePlayer(Player a, Player b){
//     if(a.getScore() > b.getScore())
//         return a;
//     else 
//         return b;
// }

// int main(){
//     cout<<"\n\n\n\n";

//     Player harsh;
//     Player raghav;

//     Player *urvi = new Player;

//     Gun akm;
//     akm.ammo = 100;
//     akm.damage = 50;
//     akm.scope = 2;

//     harsh.setAge(21);
//     harsh.setScope(100);
//     harsh.setIsAlive(true);
//     harsh.setHealth(70);
//     harsh.setGun(akm);
//     harsh.setHelmet(2);

//     Gun awm;
//     awm.ammo = 15;
//     awm.damage = 150;
//     awm.scope = 8;

//     raghav.setAge(22);
//     raghav.setScore(20);
//     raghav.setIsAlive(true);
//     raghav.setHealth(100);
//     raghav.setGun(awm);
//     raghav.setHelmet(3);

//     Gun gun123 = raghav.getGun();
//     cout<<gun123.damage<<endl;
//     cout<<gun123.ammo<<endl;
//     cout<<gun123.scope<<endl;

//     harsh.getHelmet();
//     raghav.getHelmet();
// }






















#include <iostream>
using namespace std;

class Gun {
public:
    int ammo;
    int damage;
    int scope;
};

class Player {
private:
    class Helmet {
        int hp;
        int level;

    public:
        void setHp(int hp) {
            this->hp = hp;
        }

        void setLevel(int level) {
            this->level = level;
        }

        int getHp() {
            return hp;
        }

        int getLevel() {
            return level;
        }
    };

    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

public:
    int getHealth() {
        return health;
    }

    int getAge() {
        return age;
    }

    int getScore() {
        return score;
    }

    bool isAlive() {
        return alive;
    }

    Gun getGun() {
        return gun;
    }

    void setHealth(int health) {
        this->health = health;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setScore(int score) {
        this->score = score;
    }

    void setIsAlive(bool alive) {
        this->alive = alive;
    }

    void setGun(Gun gun) {
        this->gun = gun;
    }

    void setHelmet(int level) {
        int health = 0;

        if(level == 1)
            health = 25;
        else if(level == 2)
            health = 50;
        else if(level == 3)
            health = 100;
        else
            cout << "Error, invalid level!!";

        helmet.setLevel(level);
        helmet.setHp(health);
    }

    void getHelmet() {
        cout << "Helmet HP: " << helmet.getHp() << endl;
        cout << "Helmet Level: " << helmet.getLevel() << endl;
    }
};

int addScore(Player a, Player b) {
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b) {
    if(a.getScore() > b.getScore())
        return a;
    else
        return b;
}

int main() {
    cout << "\n\n\n\n";

    Player harsh;
    Player raghav;

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    harsh.setAge(21);
    harsh.setHealth(70);
    harsh.setIsAlive(true);
    harsh.setScore(10);
    harsh.setGun(akm);
    harsh.setHelmet(2);

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setIsAlive(true);
    raghav.setHealth(100);
    raghav.setGun(awm);
    raghav.setHelmet(3);

    Gun gun123 = raghav.getGun();
    cout << "Gun Damage: " << gun123.damage << endl;
    cout << "Gun Ammo: " << gun123.ammo << endl;
    cout << "Gun Scope: " << gun123.scope << endl;

    harsh.getHelmet();
    raghav.getHelmet();

    return 0;
}
