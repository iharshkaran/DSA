#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> stack){
    while(stack.size()>0){
        cout<<stack.top()<<" ";
        stack.pop();
    } 
    cout<<endl;
    return;
}
void pushAtIdx(stack<int>& st,int idx,int n){
    stack<int> temp;
    // empty st into gt
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(n);
    // empty temp into st
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    pushAtIdx(st,0,70);
    display(st);
}