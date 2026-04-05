#include<iostream>
#include<string>
#include<vector>
using namespace std;
// Method-1(Bad Complexity)
void printSubset(string ans, string original){
    if(original.size()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    printSubset(ans+ch,original.substr(1));
    printSubset(ans,original.substr(1));
}
// Method-2(Better Complexity)
void printSubset(string ans, string original,int idx){
    if(original.size()==idx){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    printSubset(ans+ch,original,idx+1);
    printSubset(ans,original,idx+1);
}
// Store Subset
void storeSubset(string ans, string original,vector<string> &v){
    if(original.size()==0){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    storeSubset(ans+ch,original.substr(1),v);
    storeSubset(ans,original.substr(1),v);
}

int main(){
    string str = "abc";
    vector<string> v;

    printSubset("",str);
    printSubset("",str,0);
    storeSubset("",str,v);
    for(string ele : v){
        cout<<ele<<" ";
    }
}