//Valid Anagram (LeetCode-242)

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string word1;
    cout<<"Enter the first String :";
    cin>>word1;
    sort(word1.begin(),word1.end());
    string word2;
    cout<<"Enter the Second String :";
    cin>>word2;
    sort(word2.begin(),word2.end());
    if(word1==word2) cout<<"true";
    else cout<<"false";
}