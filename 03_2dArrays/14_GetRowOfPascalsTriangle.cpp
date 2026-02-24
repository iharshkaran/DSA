// leetCode-119
#include<iostream>
#include<vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> r(rowIndex+1,0);
    r[0] = 1;
    for(int i=1; i<=rowIndex; i++){
        for(int j=i; j>0; j--){
            r[j]=r[j]+r[j-1];
        }
    }
    return r;
        // int m = rowIndex + 1;
        // vector<vector<int>> v;
        // // getRow from Pascal's Triangle
        // for (int i = 0; i < m; i++) {
        //     vector<int> a(i + 1);
        //     v.push_back(a);
        //     for (int j = 0; j <= i; j++) {
        //         if (j == 0 || j == i) {
        //             v[i][j] = 1;
        //         } else {
        //             v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
        //         }
        //     }
        // }
        // return v[rowIndex];
}
int main(){
    vector<int> v1 = getRow(4);
    for(int i=0; i<v1.size(); i++){
            cout<<v1[i]<<" ";
    }
}