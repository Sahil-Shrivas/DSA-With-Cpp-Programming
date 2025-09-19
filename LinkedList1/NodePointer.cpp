#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this -> val = val;
        this -> next = NULL;
    } 
};
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    // Node temp = a;
    // while(1){
    //     cout<<temp.val<<" ";
    //     if(temp.next==NULL);
    //     temp = *(temp.next);
    // }
}