#include<iostream>
#include<iostream>
using namespace std;
int main(){
    int arr[] = {3 ,4 ,6 ,7 ,7 , 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int min = INT_MAX;
    int secMin = INT_MAX;
    for(int i=0; i<n; i++){ 
        if(min>arr[i]){
            secMin = min;
            min = arr[i];
        } 
        else if (secMin > arr[i] && min != arr[i]) secMin = arr[i];
        
    }
    cout<<secMin<<endl;
    cout<<min<<endl;
}