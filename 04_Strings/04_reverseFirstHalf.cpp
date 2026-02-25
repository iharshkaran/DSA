#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout << "Enter the even length sentence/word: ";
    getline(cin, s);

    while (s.length() % 2 != 0) {
        cout << "Please enter an even length sentence/word: ";
        getline(cin, s);
    }

    int n = s.length();
    reverse(s.begin(), s.begin() + n / 2);
    cout << s << endl;



    // Reverse substring positioning 2 to 5
    string word;
    cout<<"Enter the word : ";
    // cin>>word; // cin >> word leaves a newline (\n) in the input buffer, so the next getline reads that newline immediately and stores an empty string in s2.
    getline(cin,word);
    reverse(word.begin()+1,word.begin()+5);
    cout<<word<<endl;




    // Reverse Half using substr
    string s2;
    cout<<"Enter the even length Sentence/word : ";
    getline(cin , s2);
    while(s2.length()%2!=0){
        cout<<"please Enter even length Sentence/work : ";
        getline(cin,s2);
        }
    n = s2.length();
    reverse(s2.begin()+0 , s2.begin()+n/2);
    cout<<s2<<endl;
    }