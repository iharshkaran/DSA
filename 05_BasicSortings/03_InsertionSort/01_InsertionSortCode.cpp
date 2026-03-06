#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5 , 1 , 4 , 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //Insertion Sort
    // for(int i=1; i<n; i++){ 
    //     int j = i;
    //     while(j>=1 && arr[j]<arr[j-1]){
    //         swap(arr[j],arr[j-1]);
    //         j--;
    //     }
    // }

    for(int i=1; i<n; i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}
