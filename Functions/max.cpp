#include<bits/stdc++.h>
using namespace std;
int maxthree(int a, int b, int c)
{
    if(a>b && a>c){
        cout<<"A is large";
    }
    else if(b>a && b>c){
        cout<<"B is large";
    }
    else
    cout<<"C is large";
}
int main()
{
    int a, b, c;
    cout<<"Enter 1st digit : ";
    cin>>a;
    cout<<"Enter 2nd digit :";
    cin>>b;
    cout<<"Enter 3rd digit : ";
    cin>>c;
    maxthree(a, b, c);
}