#include<iostream>
#include<vector>
#include<cstdlib> // rand()
#include<ctime>   // time()
using namespace std;

int partition(vector<int> &v , int si, int ei){
    
    // 🔥 Random Pivot
    int pivotIdxRandom = si + rand() % (ei - si + 1);
    int pivotElement = v[pivotIdxRandom];

    // count elements <= pivot
    int count = 0;
    for(int i = si; i <= ei; i++){
        if(i == pivotIdxRandom) continue;
        if(v[i] <= pivotElement) count++;
    }

    // correct position of pivot
    int pivotIdx = si + count;
    swap(v[pivotIdxRandom], v[pivotIdx]);

    int i = si;
    int j = ei;

    // place elements on correct side
    while(i < pivotIdx && j > pivotIdx){
        if(v[i] <= pivotElement) i++;
        else if(v[j] > pivotElement) j--;
        else {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }

    return pivotIdx;
}

void quickSort(vector<int> &v , int si, int ei){
    if(si >= ei) return;

    int pi = partition(v, si, ei);

    quickSort(v, si, pi-1);
    quickSort(v, pi+1, ei);
}

int main(){
    srand(time(0)); // 🔥 important for randomness

    int arr[]={5,2,6,7,8,9,10,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v(arr,arr+n);

    quickSort(v,0,n-1);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}