#include <iostream>
using namespace std;
void fun(int x, int y){        //formal parameters
    cout<<"address of fun x : "<<&x<<endl;
    cout<<"address of fun y : "<<&y<<endl;
}
int main(){
    int x = 3;
    int y = 7;
    cout<<"address of main x : " <<&x<<endl;
    cout<<"address of main y : " <<&y<<endl;
    fun(x,y);
}