#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int arr2[3][4] = {{3,45,2,55},{33,42,42,42},{23,23,42,55}};
    int arr3[3][4] = {3,45,2,55,33,42,42,42,23,23,42,55};
    int arr4[][4] = {3,45,2,55,33,42,42,42,23,23,42,55};
    // int arr5[3][];   // incorrect
    //int arr6[][];     //incorrect
    cout<<arr2[0][1];
}