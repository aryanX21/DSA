/*
# Rotate Array - Reversal Approach

## Description

This program rotates an array to the right by k positions using the reversal approach.

## Approach

1. Reverse the entire array.
2. Reverse the first k elements.
3. Reverse the remaining elements.

## Time Complexity

O(n)

## Space Complexity

O(1)
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void RotateArray(vector<int> &nums, int k){

    int n = nums.size();

    if(n == 0) return;

    k %= n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k );
    reverse(nums.begin() + k, nums.end());

    for(int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
    }
}

int main(){

    vector<int> nums;
    int n,k;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;

        nums.push_back(x);
    }

    cout<<"Enter k: ";
    cin>>k;

    cout<<"Rotated array: ";
    RotateArray(nums,k);

    return 0;

}