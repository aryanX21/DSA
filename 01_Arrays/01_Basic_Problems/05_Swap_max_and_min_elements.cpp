#include<iostream>
using namespace std;

void Swap_Max_Min(int arr[], int n){

    int max_index = 0;
    int min_index = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[max_index]){
            max_index = i;
        }
        if(arr[i] < arr[min_index]){
            min_index = i;
        }
    }

    swap(arr[max_index], arr[min_index]);
}


int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array: ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    Swap_Max_Min(arr,n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }   

    return 0;

}