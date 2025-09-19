#include <iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter a number : ";
        cin>>n;
        int sum = 0;
        if (n%2==0)sum  = -n/2;
        else sum = -n/2 + n;
        cout<<sum;
    }