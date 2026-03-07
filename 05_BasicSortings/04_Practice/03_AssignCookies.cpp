// Assign Cookies (LeetCode-455)

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int count = 0;
    int j = 0;
    int i = 0;
    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){
            count++;
            j++;
            i++;
        } else j++;
    }
    return count;
}
int main(){
    vector<int> g = {1,2};
    vector<int> s = {1,2,3};

    int value = findContentChildren(g,s);
    cout<<value<<" ";
    
}