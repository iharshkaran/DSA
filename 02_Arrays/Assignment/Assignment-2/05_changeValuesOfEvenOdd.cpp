#include<iostream>
using namespace std;
int main(){
    int arr[] = {3 ,4 ,6 ,7 ,7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        (i%2!=0)? arr[i] *= 2: arr[i] += 10;
        cout<<arr[i]<<" ";
    }
}