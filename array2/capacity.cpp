#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;      // size   capacity
    v.push_back (6);    // 1       1
    v.push_back (1);    // 2       2   jb size aur capacity same hoti to next wale k liye capacity double ho jati.
    v.push_back (9);    // 3       4 
    v.push_back (5);    // 4       4
    v.push_back (2);    // 5       8
    v.push_back (4);    // 6       8
    v.push_back (8);    // 7       8
    v.push_back (9);    // 8       8
    v.push_back (10);   // 9      16
    v.push_back (6);    // 10     16
    v.push_back (10);   // 11     16 
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.pop_back ();    
    v.pop_back ();    
    v.pop_back ();       //pop_back ()  is only to remove the element form back. change only size not capacity.
    v.pop_back ();    
    v.pop_back ();
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
}