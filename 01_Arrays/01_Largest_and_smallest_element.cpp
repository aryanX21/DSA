#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array: ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int smallest = INT16_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    int largest = INT16_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout<<"Smallest: "<<smallest<<endl;
 
    cout<<"Largest: "<<largest<<endl;

    return 0;
}