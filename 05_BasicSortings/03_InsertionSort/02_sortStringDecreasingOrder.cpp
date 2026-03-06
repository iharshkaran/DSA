// Ques : Sort a String in decreasing order of values 
// associated after removal of values smaller than X.


#include<iostream>
#include<climits>
#include<string>
using namespace std;
int main(){
    string s = "AZYZXBDJKX";
    int n = s.length();

    string str;
    for(int i=0; i<n; i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }

    //Insertion sort(reverse)

    for(int i=1; i<str.length(); i++){
        int j = i;
        while(j>=1 && str[j]>str[j-1]){
            swap(str[j],str[j-1]);
            j--;
        }
    }

    for(char ele : str){
        cout<<ele<<" ";
    }
}