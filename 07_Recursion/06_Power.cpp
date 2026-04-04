#include<iostream>
using namespace std;

// int power(int a, int b){

//     if (a==0 && b==0){
//         cout<<"0 raised to the power 0 is not defined ";
//         return -1;
//     } else if(a==0) return 0;

//     int pow = 1;
//     for(int i=1; i<=b;i++) pow*=a;
//     return pow;
// }

int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}

int main(){
    int a;
    cout<<"Enter Base : ";
    cin>>a;
    int b;
    cout<<"Enter Exponent : ";
    cin>>b;

    cout<<a<<" raised to the power "<<b<<" is "<<power(a,b);
}