#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the word : ";
    cin>>str;
    for(int i=0; str[i]!='\0'; i++){
        if(i%2==0){
            str[i] = 'a'; // in C++ strings are mutable
        }
    }
    cout<<str;
}