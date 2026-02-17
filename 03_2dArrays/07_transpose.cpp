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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr1[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //store and print transpose matrix
    int arr2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2[i][j]=arr1[j][i];
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}