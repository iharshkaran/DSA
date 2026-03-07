// Sqrt(x) (LeetCode-69)

#include<iostream>
using namespace std;
int mySqrt(int x) {
    int i=0;
    int j=x;
    while(i<=j){
        long long mid = i+((j-i)/2);
        if(mid*mid==x) return mid;
        else if(mid*mid<x) i=mid+1;
        else j=mid-1;
    }
    return j;
}   

int main(){
    cout<<mySqrt(9);
}
