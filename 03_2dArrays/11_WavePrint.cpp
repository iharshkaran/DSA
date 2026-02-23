#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the no of rows : ";
    cin>>m;
    cout<<"Enter the no of columns : ";
    cin>>n;
        int arr1[m][n];
    cout<<"Enter element of Array 1 : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl;

    //wave print left -> right -> left
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr1[i][j]<<" ";
            }
        } else {
            for(int j=n-1;j>=0;j--){
                cout<<arr1[i][j]<<" ";
            }
        }
    }
    cout<<endl;

    //wave print bottom to top (left -> right -> left)
    for(int i=n-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr1[i][j]<<" ";
            }
        } else {
            for(int j=n-1;j>=0;j--){
                cout<<arr1[i][j]<<" ";
            }
        }
    }
    cout<<endl;

    //wave print top to bottom (top -> bottom -> top -> bottom)
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<arr1[i][j]<<" ";
            
            }
        } else {
            for(int i=0;i<n;i++){
                cout<<arr1[i][j]<<" ";
            }
        }
    }
    cout<<endl<<endl;
}