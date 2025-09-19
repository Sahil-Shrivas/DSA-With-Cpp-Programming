#include<iostream>
using namespace std;
// //__builtin_popcount(n)   [to find No. of sets bits for any integer n]
// int count_set_bits(int n){
//     return __builtin_popcount(n);
// }
// int main(){
//     cout<<count_set_bits(453)<<endl;
//     return 0;
// }


//Brian Kernigler'n Algo
int count_set_bits_2(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
int main(){
    cout<<count_set_bits_2(453)<<endl;
    return 0;
}