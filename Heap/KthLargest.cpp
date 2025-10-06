#include <iostream>
#include <queue>
using namespace std;
int main(){
    int arr[] = {10,20,-4,5,18,24,1,-7,56};
    int k = 2;
    int n = sizeof(arr)/4;
    priority_queue< int,vector<int>,greater<int> > pq;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}



// #include <iostream>
// #include <queue>
// using namespace std;
// int main(){
//     int a[] = {12,14,43,32,13,4,55};
//     int k = 4;
//     int n = sizeof(a)/4;
//     priority_queue < int,vector<int>,greater<int> > pq;
//     for(int i = 0; i<n; i++){
//         pq.push(a[i]);
//         if(pq.size()>k) pq.pop();
//     }
//     cout<<pq.top();
// }