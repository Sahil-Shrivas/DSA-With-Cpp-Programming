#include <iostream>
#include <queue>
using namespace std;
int main(){
    int arr[]={10,20,-4,5,18,24,1,-7,56};
    int k = 2;
    int n = sizeof(arr)/4;
    priority_queue<int> pq;     //maxHeap
    for(int i=0; i<n; i++){
        pq.push(arr[i]);        //logk
        if(pq.size()>k) pq.pop(); //logk
    }                               //T.C = O(n*logK)
                                    //S.C = O(n) (total space)
                                    //Auxillary Space (A.S) = O(K) 
    cout<<pq.top();
}