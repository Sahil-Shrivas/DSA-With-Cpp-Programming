#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq;     //max heap
    pq.push(10);
    pq.push(40);
    pq.push(-5);
    pq.push(90);
    pq.push(-17);
    cout<<pq.top()<<endl;         //90
    pq.pop();
    cout<<pq.top();
}