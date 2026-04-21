#include<iostream>
#include<unordered_set>
using namespace std;
    int main(){
        unordered_set<int> s;
        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(4);
        s.insert(5);
        s.insert(7);
        s.insert(2);
        s.insert(1);
        for(int ele : s){
            cout<<ele<<" ";
        }
        cout<<endl;
        
        s.erase(7);
        s.erase(2);
        for(int ele : s){
            cout<<ele<<" ";
        }
        cout<<endl;
        
        // s.find() searches in sets and if not found returns s.end() which is iterator next to the last value in set

        int target = 4;
        if(s.find(target)!=s.end()) cout<<"exist"<<endl;
        else cout<<"Not exist"<<endl;
}