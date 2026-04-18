#include<iostream>
#include<vector>
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
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    vector<int> v;
    // empty st into v
    while(st.size()>0){
        v.push_back(st.top());
        st.pop();
    }
    // empty v into st
    for(int i=0; i<v.size(); i++){
        st.push(v[i]);
    }
    display(st);
}