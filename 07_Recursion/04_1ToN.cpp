#include<iostream>
using namespace std;
// with Extra Parameter
void CountWithPara(int i , int n){
    if(i>n) return;
    cout<<i<<endl;
    CountWithPara(i+1,n);
}

// After recursive call
void Count(int n){
    if(n==0) return;
    Count(n-1);
    cout<<n<<endl;

}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // CountWithPara(1,n);
    Count(n);
}