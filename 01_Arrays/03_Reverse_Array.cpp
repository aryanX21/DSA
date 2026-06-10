#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int size;
    cout<<"\nEnter size of array: ";
    cin>>size;

    int arr[size];

    cout<<"\nEnter elements: ";

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }    

    reverseArray(arr, size);

    cout<<"Reverse: ";

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}