#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the no of rows : ";
    cin>>m;
    cout<<"Enter the no of columns : ";
    cin>>n;
    int arr1[m][n];
    int arr2[m][n];
    cout<<"Enter element of Array 1 : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter element of Array 2 : "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }


    // int sum[m][n];
    cout<<"Sum of Array 1 and Array 2 : "<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         sum[i][j] = arr1[i][j] + arr2[i][j];
    //         cout<<sum[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
}