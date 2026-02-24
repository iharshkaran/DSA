// Search a 2D Matrix 2 (LeetCode-240)

#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int j = n-1;
        while(i<=m-1 && j>=0){
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else i++;
        } 
        return false;
    }

int main(){
    vector<vector<int>> matrix(5,vector<int>(5));
    matrix[0][0] = 1;
    matrix[0][1] = 4;
    matrix[0][2] = 7;
    matrix[0][3] = 11;
    matrix[0][4] = 15;

    matrix[1][0] = 2;
    matrix[1][1] = 5;
    matrix[1][2] = 8;
    matrix[1][3] = 12;
    matrix[1][4] = 19;

    matrix[2][0] = 3;
    matrix[2][1] = 6;
    matrix[2][2] = 9;
    matrix[2][3] = 16;
    matrix[2][4] = 22;

    matrix[3][0] = 10;
    matrix[3][1] = 13;
    matrix[3][2] = 14;
    matrix[3][3] = 17;
    matrix[3][4] = 24;

    matrix[4][0] = 18;
    matrix[4][1] = 21;
    matrix[4][2] = 23;
    matrix[4][3] = 26;
    matrix[4][4] = 30;
    cout<<searchMatrix(matrix,25);
}