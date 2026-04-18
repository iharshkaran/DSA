#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>& stack,int n){
    if(stack.size()==0){
        stack.push(n);
        return;
    } 
    int x = stack.top();
    stack.pop();
    pushAtBottom(stack,n);
    stack.push(x);
}
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
    display(st);
    pushAtBottom(st,89);
    cout<<endl;
    display(st);
}