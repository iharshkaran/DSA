#include<iostream>
using namespace std;
void TOH(int n, char s, char h, char d){
    // s : Start
    // h : Helper
    // d : Destination
    if(n==0) return;
    TOH(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    TOH(n-1,h,s,d);
}
int main(){
    int n = 4;
    TOH(n,'A','B','C');
}