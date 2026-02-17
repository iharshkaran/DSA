#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the no of rows : ";
    cin>>m;
        int arr1[m][m];
    cout<<"Enter element of Array 1 : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr1[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<m;i++){
        for(int j=i+1 ; j<m ; j++){
            int temp = arr1[i][j];
            arr1[i][j]=arr1[j][i];
            arr1[j][i]=temp;
            cout<<arr1[i][j]<<endl;
        }
    }
}