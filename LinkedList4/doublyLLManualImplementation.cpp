#include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};


void display(Node* head){
    while(head){
        cout<<head->val<<"";
        head = head->next;
    }
    cout<<endl;
}
int main(){
Node* a = new Node(10);
Node* b = new Node(20);
Node* c = new Node(30);

a->next = b;
b->next = c;
c->prev = b;
b->prev = a;
display(a);
}