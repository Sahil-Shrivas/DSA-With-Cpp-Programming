#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Back element: "<<q.back()<<endl;
    q.pop();
    cout<<"After pop, front element: "<<q.front()<<endl;
    return 0;
}