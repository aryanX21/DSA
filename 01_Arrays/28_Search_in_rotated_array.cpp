/*
    Search in Rotated Sorted Array - Binary Search

    Description:
    This program searches for a target element in a rotated sorted array
    using Binary Search.

    Approach:
    1. Find the middle element of the current search range.
    2. If nums[mid] is equal to the target, return mid.
    3. Determine which half of the array is sorted.
    4. If the left half is sorted, check whether the target lies
       within the range of the left half.
    5. If it does, search the left half; otherwise, search the right half.
    6. If the right half is sorted, check whether the target lies
       within the range of the right half.
    7. If it does, search the right half; otherwise, search the left half.
    8. Return -1 if the target is not found.

    Time Complexity:
    O(log n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

 int search(vector<int>& nums, int target) {

        int st = 0, end = nums.size() - 1, mid;

        while(st <= end){

            mid = st + (end - st)/2;

            if(nums[mid] == target) {
                return mid;
            }

            if(nums[st] <= nums[mid]){ //left half
                if(nums[st] <= target && target <= nums[mid]){
                    end = mid - 1;
                }
                else st = mid + 1;
            }

            else{ //right half
                if(nums[mid] <= target && target <= nums[end]){
                    st = mid + 1;
                }
                else end = mid - 1;
            }
        }

        return -1;
        
    }


int main(){

      int n;

    cout<<"Enter the size of vector: ";
    cin>>n;

    vector<int> nums;

    cout<<"Enter elements (sorted): ";

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        nums.push_back(x);
    } 

    int target;

    cout<<"Enter target: ";
    cin>>target;

    int ans = search(nums, target);

    if(ans == -1){
        cout<<"Target not exist"<<endl<<endl;
        return 0;
    }

    else   cout<<"Target index: "<<ans<<endl;

    return 0;
}