/*
    Remove Element - Two Pointer Approach

    Description:
    This program removes all occurrences of a given value from an array
    in-place and returns the number of elements that are not equal to
    the given value.

    Approach:
    1. Use pointer 'i' to traverse through the entire array.
    2. Use pointer 'k' to keep track of the next position where a valid
       element should be placed.
    3. If nums[i] is not equal to val, store nums[i] at nums[k].
    4. Increment k after placing a valid element.
    5. Return k as the number of elements remaining after removing val.

    The elements after the first k positions are not important.

    Time Complexity:
    O(n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {

    int n = nums.size();
    int k = 0;
    
    for(int i = 0; i < n; i++){

        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;        
}

int main(){

    vector<int> nums;
    int n,val;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;

        nums.push_back(x);
    }

    cout<<"Enter value to remove: ";
    cin>>val;

    cout<<"No. of elements not equal to removed element: "<<removeElement(nums, val);

    return 0;
}