#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
// void RemoveConsecutive(string s){
//     stack<char> st;
//     for(int i=0; i<s.length();i++){
//         if(st.size()==0) st.push(s[i]);
//         else if(st.top()==s[i]) i++;
//         else st.push(s[i]);
//     }
//     //Print
//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }

void RemoveConsecutive(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=0; i<s.length();i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
    s = "";

    while(st.size()>0){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    cout<<s;
}
int main(){
    string s = "aaaabbcddaabffg";
    RemoveConsecutive(s);
}