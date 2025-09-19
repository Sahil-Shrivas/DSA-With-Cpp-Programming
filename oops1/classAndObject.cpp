#include <iostream>

class Player{
    public:
    int score;
  //  private:
    int health;
};

using namespace std;
int main(){

   // ignore these lines
   // #ifndef ONLINE_JUDGE
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   // #endif

    Player amit;
    amit.score = 90;
    amit.health = 100;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;

    cout<<endl;
    
    Player harsh;
    harsh.score = 10;
    harsh.health = 30;
    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;

    cout<<endl;

    Player riti;
    riti.score = 77;
    riti.health = 11;
    cout<<riti.score<<endl;
    cout<<riti.health<<endl;
}