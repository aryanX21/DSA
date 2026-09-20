/*
    Minimum Size Subarray Sum - Sliding Window Approach

    Description:
    This program finds the minimum length of a contiguous subarray
    whose sum is greater than or equal to the given target.

    Approach:
    1. Use two pointers, 'st' and 'end', to maintain a sliding window.
    2. Expand the window by moving 'end' and add nums[end] to the sum.
    3. When the sum becomes greater than or equal to the target,
       calculate the current window length.
    4. Update MinLen with the smaller window length.
    5. Move 'st' forward and remove nums[st] from the sum to shrink
       the window while it remains valid.
    6. Continue expanding and shrinking the window until all elements
       have been processed.
    7. If no valid subarray exists, return 0.

    Since all elements in the array are positive, shrinking the window
    after reaching the target can only reduce its length while allowing
    us to find the minimum valid subarray.

    Time Complexity:
    O(n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int MinLen = INT16_MAX;
        int sum = 0;
        int st = 0, end = 0;
        
        while (end < n){

            sum += nums[end];
             
            while(sum >= target){

                int len = end - st + 1;
                MinLen = min(MinLen, len);

                sum -= nums[st];
                st++;
            }

            end++;
        }

        if(MinLen == INT16_MAX){
            MinLen = 0;
        }
  
        return MinLen;
        
    }


int main(){

    int n;

    cout<<"Enter the size of vector: ";
    cin>>n;

    vector<int> nums;

    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        nums.push_back(x);
    } 

    int target;

    cout<<"Enter target: ";
    cin>>target;

    cout<<"Minimum Size: "<<minSubArrayLen(target,nums);

    return 0;
}
