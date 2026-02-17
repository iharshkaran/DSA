#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    char str[n];
    for(int i=0; i<n ; i++){
        cin>>str[i];
    }
    cout<<str<<endl;
    int i=0;
    while(i<n){
        if(i%2==0){
            str[i]='a';
        }
        i++;
    }
    cout<<str<<endl;
    

}