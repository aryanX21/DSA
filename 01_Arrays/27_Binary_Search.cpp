/*
    Binary Search

    Description:
    This program finds a target element in a sorted vector
    using the Binary Search algorithm.

    Approach:
    1. Initialize 'st' at the beginning and 'end' at the last index.
    2. Calculate the middle index.
    3. If the target is smaller than nums[mid], search the left half.
    4. If the target is greater than nums[mid], search the right half.
    5. If the target matches nums[mid], return its index.
    6. If the target is not found, return -1.

    Binary Search works only on a sorted array or vector.

    Time Complexity:
    O(log n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> &nums, int &target){

    int n = nums.size();
    int st = 0, end = n - 1, mid;

    while(st <= end){

        mid = st + (end - st)/2;

        if(target < nums[mid]){
            end = mid - 1;
        }

        else if(target > nums[mid]){
            st = mid + 1;
        }

        else return mid;
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

    int ans = BinarySearch(nums, target);

    if(ans == -1){
        cout<<"Target not exist"<<endl<<endl;
        return 0;
    }

    else   cout<<"Target index: "<<ans<<endl;

    return 0;
}