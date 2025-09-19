#include <iostream>
using namespace std;
    int main ()  {
        cout<<"Enter The Number : ";
        int n;
        cin>>n;
        if (n>=100 && n<=999){
            cout<<"Three Digit Number";
        }
        else {
            cout<<"Not A Three Digit Number";
        }
    }