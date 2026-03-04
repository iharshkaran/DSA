#include<iostream>
using namespace std;
int main(){
    int arr[] = {3 ,4 ,6 ,7 ,7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int oddSum = 0;
    int evenSum = 0;
    for(int i=0; i<n; i++){
        // if(i%2==0){
        //     evenSum += arr[i];
        // } else oddSum += arr[i];

        (i%2==0)? evenSum += arr[i]: oddSum += arr[i];
    }
    cout<< evenSum-oddSum;
}