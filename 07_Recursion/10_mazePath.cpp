#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    return rightWays + downWays;
    
}
int maze2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze2(row,col-1);
    int downWays = maze2(row-1,col);
    return rightWays + downWays;
    
}
void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){ // Destination Reached
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+"R"); //Right
    printPath(sr+1,sc,er,ec,s+"D"); //Down 
}
void printPath2(int row, int col, string s){
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    }
    printPath2(row,col-1,s+"R"); //Right
    printPath2(row-1,col,s+"D"); //Down   
}
int main(){
    cout<<"Maze (4 Parameter) = "<<maze(1,1,4,4)<<endl;
    cout<<"Maze (2 Parameter) = "<<maze2(4,4)<<endl<<endl;
    cout<<"Paths (4 Parameter):"<<endl;
    printPath(1,1,4,4,"");
    cout<<endl<<"Paths (2 Parameter):"<<endl;
    printPath2(4,4,"");
}