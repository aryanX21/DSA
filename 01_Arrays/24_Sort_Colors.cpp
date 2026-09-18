/*
    Sort Colors - Counting Approach

    Description:
    This program sorts an array containing only 0, 1, and 2
    in-place using a counting approach.

    Approach:
    1. Traverse the array and count the number of 0s, 1s, and 2s.
    2. Replace the first part of the array with all the 0s.
    3. Replace the next part with all the 1s.
    4. Replace the remaining part with all the 2s.

    Since the array contains only three possible values,
    there is no need to use a general sorting algorithm.

    Time Complexity:
    O(n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int>& nums){

    int r = 0, w = 0, b = 0;

    for(int i = 0; i < nums.size(); i++){

        if(nums[i] == 0){
            r++;
        }

        if(nums[i] == 1){
            w++;
        }

        if(nums[i] == 2){
            b++;
        }
    }

    for(int i = 0; i < r; i++){
        nums[i] = 0;
    }

    for(int i = r; i < r + w; i++){
        nums[i] = 1;
    }

    for(int i = r + w; i < nums.size(); i++){
        nums[i] = 2;
    }
}

int main(){

    vector<int> nums;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements (only 0, 1, or 2): ";

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    sortColors(nums);

    cout << "Sorted array: ";

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}