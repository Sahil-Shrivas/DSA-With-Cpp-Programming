#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back (6);
    v.push_back (5);
    v.push_back (9);
    v.push_back (5);
    v.push_back (2);
    v.push_back (4);
    v.push_back (8);
    v.push_back (9);
    v.push_back (10);
    v.push_back (6);
    v.push_back (10);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();             //v.pop_back()   is basically use to remove element from last side.
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}