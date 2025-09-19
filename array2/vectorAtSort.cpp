#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> q;
    q.push_back(9);
    q.push_back(10);
    q.push_back(6);
    q.push_back(1);
    q.push_back(5);
   //  q.at(2) = 90;
   // cout<<q[2];
   for (int i = 0; i < q.size(); i++)
   {
    cout<<q.at(i)<<" ";
   }
   cout<<endl;
   (q.begin(), q.end());
   for(int i=0; i<q.size(); i++){
    cout<<q.at(i)<<" ";
   }
   cout<<endl;
}