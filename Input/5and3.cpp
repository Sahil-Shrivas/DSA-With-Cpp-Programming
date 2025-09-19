#include <iostream>
using namespace std;
    int main () {
        cout<<"Enter The Number : ";
        int n;
        cin>>n;
        if (n%5==0 && n%3==0){
            cout<<"The Number Is Divisible By 5 and 3";
        }
        else {
            cout<<"The Number Is Not Divisible By 5 and 3";
        }
    }