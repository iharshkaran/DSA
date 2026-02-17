#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Karan is a student";

    for(int i=0; str[i]!='\0';i++){
        cout<<str[i];
    }
    // cout<<str;

    string name;
    cin>>name;  // only if the given string has no spaces..
    getline(cin,name);
    cout<<name;
}