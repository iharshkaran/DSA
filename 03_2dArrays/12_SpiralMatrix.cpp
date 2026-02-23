#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the no of rows : ";
    cin>>m;
    cout<<"Enter the no of columns : ";
    cin>>n;

    int matrix[m][n];
    cout<<"Enter elements of Matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;

    int minr = 0;
    int minc = 0;
    int maxr = m-1;
    int maxc = n-1;
    int tne = m*n;
    int count = 0;

    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc; j<=maxc && count<tne; j++){
            cout<<matrix[minr][j]<<" ";
            count++;
        }
        minr++;

        //Down
        for(int i=minr; i<=maxr && count<tne; i++){
            cout<<matrix[i][maxc]<<" ";
            count++;
        }
        maxc--;

        //left
        for(int j=maxc; j>=minc && count<tne; j--){
            cout<<matrix[maxr][j]<<" ";
            count++;
        }
        maxr--;

        //Up
        for(int i=maxr; i>=minr && count<tne; i--){
            cout<<matrix[i][minc]<<" ";
            count++;
        }
        minc++;
}}