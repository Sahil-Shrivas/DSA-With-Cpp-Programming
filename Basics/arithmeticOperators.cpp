// Example : Take two integers a and b : a>b, and find the remainder when a is divided by b.
#include<iostream>
using namespace std;
int main (){
    int a = 14;   // a means dividend
    int b = 3;    // b means divisor
    // float q;      // q means quotient
    float r;      // r means remainder
    // q = a / b ;
    // cout<<q <<endl;
    // r = a - (b*q) ;       //a=(b*q)+r
    // cout<<r;
    r = a % b ;
    cout<<r;
}