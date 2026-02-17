#include<iostream>
using namespace std;
int main(){
    int arr[2][4];
    cout<<"Enter Roll No. : ";
    for(int i=0; i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
        if(i==0) cout<<"Enter Marks : ";
    }
    cout<<"Roll No. : ";
    for(int i=0; i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        if(i==0) cout<<"Marks : ";
    }
}