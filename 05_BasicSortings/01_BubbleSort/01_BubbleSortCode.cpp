#include<iostream>
using namespace std;
int main(){
    int arr[] = {5 , 1 , 4 , 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // //bubble sort
    // for(int i=1; i<n; i++){ //n-1 time pass
    //     for(int j=0; j<n-i; j++){
    //         if(arr[j]>arr[j+1]){
    //             //swap
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }


    //bubble sort Optimized
    for(int i=1; i<n; i++){ //n-1 time pass
        bool flag = true;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}