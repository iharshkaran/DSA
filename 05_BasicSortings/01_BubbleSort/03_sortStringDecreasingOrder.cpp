// Ques : Sort a String in decreasing order of values 
// associated after removal of values smaller than X.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "AZYZXBDJKX";
    int n = s.size();

    string str;

    for(int i=0; i<n; i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    
    for(int i=1; i<str.size(); i++){ 
        for(int j=0; j<str.size()-i; j++){
            if(str[j]<str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    cout<<str<<" ";

}