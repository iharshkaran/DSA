#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    // 5,10,20,30
    Node a(5);
    Node b(10);
    Node c(20);
    Node d(30);
    //forming linkedlist
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // cout<<(a.next)->val; // (*(a.next)).val;
    //(*((*((*(a.next)).next)).next)).val;
    // cout<<endl<<((((a.next)->next)->next))->val;
    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
}