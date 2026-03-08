#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {0,1,2,4,5,9,15,18,21,24};
    int n = v.size();
    int i = 0;
    int j = n-1;
    int result = -1;

    //T.C = O(n)
    // for(int i=0; i<n; i++){
    //     if(v[i]!=i){
    //         cout<<i;
    //         break;
    //     } 
    // }

    // T.C = O(log n)
    while(i<=j){
        int mid = i + ((j-i)/2);
        if(v[mid] != mid){
            result = mid;
            j = mid-1;
        } else i = mid+1;
    }
    cout<<result;
}