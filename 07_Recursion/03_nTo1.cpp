#include<iostream>
using namespace std;
void ReverseCount(int n){
    if(n==0) return;
    cout<<n<<endl;
    ReverseCount(n-1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    ReverseCount(n);
}