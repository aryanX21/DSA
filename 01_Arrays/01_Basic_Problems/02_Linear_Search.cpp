#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int target){
    
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){

    int arr[6] = {23,56,55,43,33,58};
    int size = 6, target;
    
    cout<<"\nEnter target: ";
    cin>>target;

    cout<<linearsearch(arr, size, target)<<endl;

    return 0;

}