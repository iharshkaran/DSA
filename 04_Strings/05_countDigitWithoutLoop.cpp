#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    string str = to_string(x);
    cout<<str.length();
}