/*
# Move Zeroes - Two Pointer Approach

## Description

This program moves all zeroes in a vector to the end while maintaining the relative order of the non-zero elements.

It uses a two-pointer approach. The `start` pointer keeps track of the position where the next non-zero element should be placed. Whenever a non-zero element is found, it is swapped with the element at `start`.

## Approach

1. Initialize `start` at index `0`.
2. Traverse the vector using `i`.
3. If `nums[i]` is non-zero, swap it with `nums[start]`.
4. Increment `start`.
5. Continue until all elements are processed.

## Time Complexity

- O(n)

## Space Complexity

- O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> MoveZeroes(vector<int> &nums){
    int start = 0;
    int n = nums.size();

    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            swap(nums[start], nums[i]);
            start++;
        }
    }

    return nums;

}

int main(){

    int n;

    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> nums;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++){

        int x;
        cin >> x;

        nums.push_back(x);
    }

    cout<<"Result: "<<endl;

    vector<int> result = MoveZeroes(nums);

    for(int i = 0; i < n; i++){
        cout<<result[i]<<" ";
    }

    return 0;
}