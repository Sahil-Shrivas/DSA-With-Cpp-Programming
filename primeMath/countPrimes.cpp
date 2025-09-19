#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2; i<= sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

    // cout<<isPrime(10);
    // cout<<"Enter the number : ";
    int countPrimes(int n){
    int count = 0;
    for(int i=2; i<n; i++){
        if(isPrime(i)) count++;
    }
    return count;
    }
    int main(){
        cout<<countPrimes(10);
        // cout<<count;
} 