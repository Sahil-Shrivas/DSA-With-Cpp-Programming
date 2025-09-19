#include <iostream>
using namespace std;
class Calculator{
private : 
    int a=10;        // data members (jo class k andar banaye)
    int b=5;

public:             // member functions (jo class k bahar bnaye)
    void add(){
        cout<<a+b<<endl;
    }

    void subtract(){
        cout<<a-b<<endl;
    }
};

int main(){
    Calculator calci;
   // calci.a = 10;
   // calci.b = 7;
    calci.add();
   // cout<<endl;
    calci.subtract();
}