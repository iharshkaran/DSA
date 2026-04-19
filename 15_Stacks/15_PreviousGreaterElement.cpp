#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] ={3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pgr[n];
    stack<int> st;
    pgr[0] = -1;
    st.push(arr[0]);
    for(int i = 1; i<n; i++){
        while(st.size()>0 && arr[i]>=st.top()){
            st.pop();
        }
        if(st.size()==0) pgr[i] = -1;
        else pgr[i] = st.top();

        st.push(arr[i]);
    }
    for(int ele : pgr){
        cout<<ele<<" ";
    }
}