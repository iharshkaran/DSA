#include<iostream>
#include<vector>
using namespace std;
// void printArray(int arr[], int n){
//     if(n==0) return;
//     printArray(arr,n-1);
//     cout<<arr[n-1]<<" ";  
// }

void printArray(int arr[], int n, int idx){
    if(n==idx) return;
    cout<<arr[idx]<<" ";  
    printArray(arr,n,idx+1);
}

void printVector(vector<int> &v, int idx){
    if(v.size()==idx) return;
    cout<<v[idx]<<" ";  
    printVector(v,idx+1);
}

int main(){
    int arr[] = {2,3,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n,0);

    cout<<endl;
    vector<int> v = {2,3,1,4};
    printVector(v,0);
}