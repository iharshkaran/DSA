#include<iostream>
#include<vector>
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
class Stack{
public:
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return head->val;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
};
void display(Stack stack){
    if(stack.size==0) return;
    int x = stack.top();
    stack.pop();
    display(stack);
    cout<<x<<" ";
    stack.push(x);
}
int main(){
    Stack st;
    st.pop();
    st.push(9);
    st.push(9);
    st.push(0);
    st.push(89);
    display(st);
    cout<<endl;
    cout<<st.size<<endl;
    st.pop();
    display(st);
}