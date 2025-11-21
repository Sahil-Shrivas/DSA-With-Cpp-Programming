#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(7);
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    map<int,int> m;
    // key = value
    m[2] = 80;
    m[3] = 70;
    m[1] = 30;
    for(auto x : m){
        cout<<x.first<<" ";
    }
}