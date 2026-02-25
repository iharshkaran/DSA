#include<iostream>
using namespace std;
int main(){
    
    // char str[] = {'a','b','c','\0','d','e','f'};
    // for(int i=0; str[i]!='\0';i++){
    //     cout<<str[i]<<" ";
    // }
    // cout<<endl;
    // cout<<str<<endl;
    // cout<<str[6]<<endl;
    // cout<<(int)str[6];

    string str = "Java i a programming language that have security Maybe :)";
    cout<<str<<endl;

    //input
    string s;
    // cin>>s; // cin only if the given string has no spaces
    getline(cin,s);
    cout<<s; 
}