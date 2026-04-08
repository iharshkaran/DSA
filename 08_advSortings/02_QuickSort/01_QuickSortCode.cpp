#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &v , int si, int ei){
    int mid = (si+ei)/2;
    int pivotElement = v[mid];
    int count = 0;
    for(int i=si; i<=ei; i++){
        if(i==mid) continue;
        if(v[i]<=pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(v[mid],v[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(v[i]<=v[pivotIdx]) i++;
        if(v[j]>v[pivotIdx]) j--;
        else if(v[i]>v[pivotIdx] && v[j]<=v[pivotIdx]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;

}
void quickSort(vector<int> &v , int si, int ei){
    if(si>=ei) return;
    int pi = partition(v,si,ei);
    quickSort(v,si,pi-1);
    quickSort(v,pi+1,ei);
}

int main(){
    int arr[]={5,2,6,7,8,9,10,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    quickSort(v,0,n-1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
} 