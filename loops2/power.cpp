#include <iostream>
using namespace std;
    int main(){
        int a,b;
        cout<<"Enter Base : ";
        cin>>a;
        cout<<"Enter Exponent : ";
        cin>>b;
        bool flag = true;
        if(b<0){
            flag = false;
            b=-b;
        }
        float power = 1;
        for(int i=1; i<=b; i++){
            power = power*a;
        }
        if(flag==false){
            power = 1/power;
            b = -b;
        }
        if(a==0 && b==0) cout<<"Not Defined";
        else 
        cout<<a<<" raised to the power "<<b<<" is "<<power;
    }