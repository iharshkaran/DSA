#include<iostream>
using namespace std;
int main(){
    int arr[] = {3 ,4 ,6 ,7 ,7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = true;
            cout<<"Given array are not sorted"<<endl;
            break;
        }
    }
    if(flag==false) cout<<"sorted"<<endl;
}