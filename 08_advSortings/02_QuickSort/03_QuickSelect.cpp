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
int kthSmallest(vector<int> &v , int si, int ei, int k){
    int pi = partition(v,si,ei);
    if(pi+1==k) return v[pi];
    else if(pi+1>k) return kthSmallest(v,si,pi-1,k);
    else return kthSmallest(v,pi+1,ei,k);
}

int main(){
    int arr[]={5,2,6,7,8,9,10,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int k = 3;
    cout<<kthSmallest(v,0,n-1,k);
} 