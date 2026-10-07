/*
    Peak Index in a Mountain Array - Binary Search

    Description:
    This program finds the index of the peak element in a mountain array
    using Binary Search.

    A mountain array first increases and then decreases, and the peak
    element is greater than both its neighboring elements.

    Approach:
    1. Set 'st' to 1 and 'end' to the second-last index to safely
       check nums[mid - 1] and nums[mid + 1].
    2. Calculate the middle index.
    3. If nums[mid] is greater than both its neighbors, return 'mid'
       as the peak index.
    4. If nums[mid] is greater than nums[mid - 1], we are on the
       increasing side, so move 'st' to mid + 1.
    5. Otherwise, we are on the decreasing side, so move 'end'
       to mid - 1.
    6. Return -1 if the peak is not found.

    Time Complexity:
    O(log n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& nums) {

       int st = 1, end = nums.size() - 2;

       while(st <= end){

           int mid = st + (end - st)/2;

           if(nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]){
               return mid;
           }

           else if(nums[mid - 1] < nums[mid]){
               st = mid + 1;
           }

           else{
               end = mid - 1;
           }
       }  

       return -1;      
}

int main(){

      int n;

    cout<<"Enter the size of vector: ";
    cin>>n;

    vector<int> nums;

    cout<<"Enter elements (in mountain form): ";

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        nums.push_back(x);
    } 

    cout<<"Peak index: "<<peakIndexInMountainArray(nums);

    return 0;
}