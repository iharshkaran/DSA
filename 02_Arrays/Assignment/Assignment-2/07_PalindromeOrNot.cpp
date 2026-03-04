#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,4, 7 ,5 ,6, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0,j=n-1; i<j; i++,j--){
        if(arr[i]!=arr[j]){
            cout<<"Not palindrome"<<endl;
            flag = true;
            break;
        }
    }
    if(flag == false) cout<<"Palindrome"<<endl;
}