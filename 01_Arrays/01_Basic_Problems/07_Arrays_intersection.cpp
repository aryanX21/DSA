#include<iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}

int main(){

    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr1[n], arr2[n];

    cout<<"Enter elements of array 1: ";

    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }

    cout<<"\nEnter elements of array 2: ";

    for(int i = 0; i < n; i++){
        cin>>arr2[i];
    }

    cout<<"\nCommon Elements: ";
    intersection(arr1, arr2, n);

    return 0;
}