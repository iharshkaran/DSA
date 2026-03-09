#include<iostream>
using namespace std;
int sum1ToN(int n){
    if(n==0) return 0;
    return n+sum1ToN(n-1);
}


// With Extra Parameter
// void sum1ToN(int sum,int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     } 
//     sum1ToN(sum+n,n-1);
// }

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // sum1ToN(0,n);
    cout<<sum1ToN(n);

}