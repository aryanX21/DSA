#include<iostream>
using namespace std;

void unique(int arr[], int n){

    for(int i = 0; i < n; i++){

        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            cout<<arr[i]<<" ";
        }
    }
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

    cout<<"Unique values: ";

    unique(arr,n);    

   return 0;

}