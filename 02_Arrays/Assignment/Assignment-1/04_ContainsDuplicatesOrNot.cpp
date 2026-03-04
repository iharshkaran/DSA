#include<iostream>
#include<iostream>
using namespace std;
int main(){
    int arr[] = {3 ,4 ,6 ,7 ,7 , 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    //method-1
    // for(int i=0; i<n; i++){ 
    //     for(int j=0; j<n; j++){
    //         if(arr[i] == arr[j]){
    //             cout<<"duplicate"<<endl;
                    // break;
    //         }
    //     }
    // }

    // method-2
    for(int i=0; i<n; i++){ 
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cout<<"duplicate"<<endl;
                break;
            }
        }
    }
}