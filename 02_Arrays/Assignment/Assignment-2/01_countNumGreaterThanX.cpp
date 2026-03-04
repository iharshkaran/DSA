#include<iostream>
using namespace std;
int main(){
    int arr[] = {3 ,4 ,6 ,7 ,7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;
    
    int count = 0;
    for(int i=0; i<n; i++){
        if(x<arr[i]) count++;
        
    } 

    cout<<count;
}