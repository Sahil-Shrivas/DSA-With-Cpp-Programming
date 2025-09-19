#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Number A and B \n";
    cin>>a>>b;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}