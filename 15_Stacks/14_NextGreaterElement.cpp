#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Using a Stack : pop, ans, push
    // SC = O(n), T.C = O(n)
    int ngr[n];
    stack<int> st;
    ngr[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        // pop all the element smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array
        if(st.size()==0) ngr[i]=-1;
        else ngr[i]=st.top();
        // push the arr[i]
        st.push(arr[i]);
    }

    for(int ele : ngr){
        cout<<ele<<" ";
    }
    cout<<endl;


}