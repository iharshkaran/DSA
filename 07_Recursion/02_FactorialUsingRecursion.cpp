#include<iostream>
using namespace std;
int factorial(int n){
    // Base case
    if(n==1 || n==0) return 1;
    // Work and Call
    int result = n*factorial(n-1);
    // Recursive Call
    return result;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<factorial(n);
}