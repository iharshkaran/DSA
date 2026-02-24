#include<iostream>
#include<vector>
using namespace std;

int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // making the first column all 1's
        for(int i=0; i<m; i++){
            if(grid[i][0]==0){ //flip
                for(int j=0; j<n; j++){
                if(grid[i][j]==1) grid[i][j]=0;
                else grid[i][j]=1;
                }
            }
        }
        //flip the column where noz>noo
        for(int j=0; j<n; j++){
            int noo = 0;
            int noz = 0;
            for(int i=0; i<m;i++){
                if(grid[i][j]==0) noz++;
                else noo++;
            }
            if(noz>noo){//flip
                for(int i=0; i<m; i++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        //Binary to decimal
        int sum = 0;
        int x = 1;
        for(int i=0; i<m; i++){
            x=1;
            for(int j=n-1; j>=0; j--){
                sum += grid[i][j]*x;
                x *= 2;
            }
        }
        return sum;
    }

int main(){
    vector<vector<int>> matrix(3,vector<int>(4));
    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[0][2] = 1;
    matrix[0][3] = 1;
    matrix[1][0] = 1;
    matrix[1][1] = 0;
    matrix[1][2] = 1;
    matrix[1][3] = 0;
    matrix[2][0] = 1;
    matrix[2][1] = 1;
    matrix[2][2] = 0;
    matrix[2][3] = 0;
    cout<<matrixScore(matrix);
}