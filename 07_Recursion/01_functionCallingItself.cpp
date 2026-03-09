#include<iostream>
using namespace std;
void goodMorning(int n){
    if(n==0) return;
    cout<<"Good Morning :)"<<endl;
    goodMorning(n-1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    goodMorning(n);
}