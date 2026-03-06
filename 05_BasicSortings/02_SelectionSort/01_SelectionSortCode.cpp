#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5 , 1 , 4 , 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //selection sort
    for(int i=0; i<n-1; i++){ //n-1 time pass
        int min = INT_MAX;
        int idx = -1;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                idx = j;
            }
        }
        swap(arr[i],arr[idx]);
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}
