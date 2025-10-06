#include <iostream>
#include <queue>
using namespace std;
int main () {
    priority_queue< int,vector<int>,greater<int> > pq;     //min heap
    pq.push(10);        //top mein 10
    pq.push(40);        //10
    pq.push(-5);        //-5
    pq.push(90);        //-5
    pq.push(-17);       //-17
    cout<<pq.top()<<endl;       //-17
    pq.pop();           //-17 is removed
    cout<<pq.top();     //-5
}