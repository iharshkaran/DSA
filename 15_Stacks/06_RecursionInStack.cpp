#include<iostream>
#include<stack>
using namespace std;
// Reverse
void displayRev(stack<int> stack){
    if(stack.size()==0) return;
    cout<<stack.top()<<" ";
    int x = stack.top();
    stack.pop();
    displayRev(stack);
    stack.push(x);
}
// normal
void display(stack<int> stack){
    if(stack.size()==0) return;
    int x = stack.top();
    stack.pop();
    display(stack);
    cout<<x<<" ";
    stack.push(x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRev(st);
    cout<<endl;
    display(st);
}