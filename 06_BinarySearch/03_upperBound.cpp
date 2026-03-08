#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,2,4,5,9,15,18,21,24};
    int n = v.size();
    int x = 15;
    int i = 0;
    int j = n-1;
    bool flag = false;
    while(i<=j){
        int mid = i + ((j-i)/2);
        if(v[mid] == x){
            cout<<v[mid+1];
            flag = true;
            break;
        } 
        else if(v[mid]<x) i=mid+1;
        else j = mid-1;
    }
    if(flag==false) cout<<v[i];
}