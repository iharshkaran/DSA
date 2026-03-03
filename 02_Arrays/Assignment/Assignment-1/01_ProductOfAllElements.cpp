#include<iostream>
using namespace std;
int main(){
    int arr[] = {3 ,4 ,6 ,7 ,7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int product = 1;
    int i = 0;
    while(i<n){
        product *= arr[i];
        i++;
    }

    cout<<product;
}