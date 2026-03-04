#include<iostream>
using namespace std;
int main(){
    int arr[] = {3 ,4 ,6 ,7 ,7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int secMax = INT_MIN;
    int thirdMax = INT_MIN;

    for(int i=0; i<n; i++){
        if(max<arr[i]){
            thirdMax = secMax;
            secMax = max;
            max = arr[i];
        }

        else if(secMax<arr[i] && max!=arr[i]){
            thirdMax = secMax;
            secMax = arr[i];
        }
        else if(secMax<arr[i] && max!=arr[i] && thirdMax<arr[i] && secMax!=arr[i]) thirdMax = arr[i];

    }
    cout<<thirdMax<<endl;
    cout<<secMax<<endl;
    cout<<max<<endl;
}