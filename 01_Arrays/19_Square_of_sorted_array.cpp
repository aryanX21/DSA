/*
    Squares of a Sorted Array - Two Pointer Approach

    Description:
    This program returns the squares of all elements in a sorted array
    in sorted order.

    Approach:
    1. Initialize two pointers at the beginning and end of the array.
    2. Use abs() to compare the absolute values of the elements at both pointers.
    3. Place the larger square at the current position from the end
       of the result vector.
    4. Move the corresponding pointer.
    5. Continue until all elements are processed.

    abs() is used to compare the magnitude of negative and positive
    numbers. For example, abs(-7) = 7.

    Time Complexity:
    O(n)

    Space Complexity:
    O(n), for the output vector.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> Square_SortedArray(vector<int> &nums){

    int n = nums.size();
    vector<int> square(n);

    int start = 0, end = n-1;

    for(int i = n - 1; i >= 0; i--){
        if(abs(nums[start]) > abs(nums[end])){
            square[i] = nums[start] * nums[start];
            start++;
        }

        else{
            square[i] = nums[end] * nums[end];
            end--;
        }
    }

    return square;
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

    vector<int> result;
    result = Square_SortedArray(nums);

    cout<<"Result: ";

    for(int i = 0; i < n; i++){
        cout<<result[i]<<" ";
    }

    return 0;

}