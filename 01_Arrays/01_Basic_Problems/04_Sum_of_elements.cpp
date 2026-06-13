#include<iostream>
using namespace std;

int SumOfArray(int arr[], int n){

    int sum = 0;;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return sum;
}

int ProductOfArray(int arr[], int n){
    int product = 1;

    for(int i = 0; i < n; i++){
        product *= arr[i];
    }

    return product;

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

    cout<<"Product of elements: "<<ProductOfArray(arr,n)<<endl;

    return 0;

}