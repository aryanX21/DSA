/*
    Remove Duplicates from Sorted Array - Two Pointer Approach

    Description:
    This program removes duplicate elements from a sorted array in-place
    and returns the number of unique elements.

    Approach:
    1. Use a pointer 'a' to keep track of the last unique element.
    2. Traverse the array using pointer 'i' starting from the second element.
    3. If nums[i] is different from nums[a], it is a new unique element.
    4. Store the new unique element at nums[a + 1] and move 'a' forward.
    5. Return a + 1 as the total number of unique elements.

    Since the array is sorted, duplicate elements are adjacent,
    which allows them to be identified efficiently.

    Time Complexity:
    O(n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int removeDuplicates(vector<int>& nums) {

    int n = nums.size();
    int a = 0;

    for(int i  = 1; i < n; i++){

        if(nums[i] != nums[a]){
            nums[a+1] = nums[i];
            a++;
        }

    }

    return a + 1;

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

    cout<<"Unique elements: "<<removeDuplicates(nums);

    return 0;
}