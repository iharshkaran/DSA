#include<iostream>
#include<string>
using namespace std;
// Method 1 (Bad Complexity)
void removeChar(string ans, string original){
    if(original.size()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    if(ch=='a') removeChar(ans,original.substr(1));
    else removeChar(ans+ch,original.substr(1));
}
// Method 2 (Better Complexity)
void removeChar(string ans, string original,int idx){
    if(original.size()==idx){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    if(ch=='a') removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);
}

int main(){
    string str = "raghav garg";

    removeChar("",str);
    removeChar("",str,0);


    // string newStr = "";
    // for(int i=0; i<str.size(); i++){
    //     if(str[i]!='a') newStr.push_back(str[i]);
    // }
    // cout<<newStr;
}