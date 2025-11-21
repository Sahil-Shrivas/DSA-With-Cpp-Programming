#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "sahil";
    p1.second = 76;
    
    m["harsh"] = 23;
    m["lokesh"] = 11;

    // for(pair<string,int> p : m){
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m.size()<<endl;

    m.erase("sahil");
    m.erase("lokesh");

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
}  


 