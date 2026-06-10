#include<iostream>
using namespace std;

int SumOfArray(int arr[], int n){

    int sum = 0;;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return sum;
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

    cout<<"Sum of elements: "<<SumOfArray(arr,n)<<endl;

    return 0;

}