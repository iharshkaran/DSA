#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = " Karan is a Student";
    // for length / size ..
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;  // 0to str.length()-1

    // push_back
    string st = "abcd";
    cout<<st<<endl;
    st.push_back('e');
    cout<<st<<endl<<endl;

    //pop_back
    string s = "harshu";
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl<<endl;

    // + operator
    string n = "abc";
    cout<<n<<endl;
    string m = "def";
    n = n + m;
    cout<<n<<endl;  
    n = n + "xyz";  //sdd  
    cout<<n<<endl<<endl;

    // reverse()
    string rev = "abcdefg";
    reverse(rev.begin(),rev.end());
    cout<<rev<<endl;
    reverse(rev.begin()+2,rev.end()-1);
    cout<<rev<<endl;
    reverse(rev.begin()+2,rev.begin()+6);
    cout<<rev<<endl;


}