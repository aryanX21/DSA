/*
    Single Element in a Sorted Array - Binary Search

    Description:
    This program finds the single non-duplicate element in a sorted
    vector where every other element appears exactly twice.

    Approach:
    1. If the vector contains only one element, return it.
    2. Initialize 'st' and 'end' to define the search range.
    3. Calculate the middle index using Binary Search.
    4. Handle boundary cases when 'mid' is the first or last index.
    5. Use 'continue' after handling a boundary case to skip the
       remaining statements of the current iteration and start
       the next iteration.
    6. Check whether the middle element differs from both neighbors.
       If so, return it as the single element.
    7. Use the even/odd index pairing pattern to determine which
       half contains the single element.
    8. Adjust the search range until the element is found.
    9. Return -1 if no single element is found.

    Time Complexity:
    O(log n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        if(n == 1)
            return nums[0];

        int st = 0, end = n - 1;

        while(st <= end) {

            int mid = st + (end - st) / 2;

            
            if(mid == 0) {
                if(nums[mid] != nums[mid + 1])
                    return nums[mid];

                st = mid + 1;
                continue;
            }

            if(mid == n - 1) {
                if(nums[mid] != nums[mid - 1])
                    return nums[mid];

                end = mid - 1;
                continue;
            }

            
            if(nums[mid - 1] != nums[mid] &&
               nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            
            if(mid % 2 == 0) {

                if(nums[mid - 1] == nums[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            }

            
            else {

                if(nums[mid - 1] == nums[mid])
                    st = mid + 1;
                else
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

    cout<<"Enter elements (sorted): ";

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        nums.push_back(x);
    } 

    cout<<"Single Element: "<<singleNonDuplicate(nums)<<endl;

    return 0;
}
