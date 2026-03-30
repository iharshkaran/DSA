#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    // For Add
    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }
    // For Remove
    void remove(){
        if(size==0){
            cout<<"Array is Empty"<<endl;
        }
        size--;
    }
    // For Get Element
    void get(int index){
        if(size==0){
            cout<<"Array is Empty"<<endl;
        }
        if(index>=size || index<0){
            cout<<"Invalid Index"<<endl;
        }
        else cout<<arr[index]<<endl;
    }
    // For Print
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        } cout<<endl;
    }
};

int main(){
    Vector v;
    v.add(5);
    v.print();
    v.add(88);
    v.add(99);
    v.add(54);
    v.add(73);
    v.print();
    v.get(0);
    v.get(999);
    v.remove();
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;

}