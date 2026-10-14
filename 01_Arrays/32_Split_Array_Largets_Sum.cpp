/*
    Topic: Split Array Largest Sum using Binary Search

    Description:
    This program splits an array into k non-empty subarrays such that
    the largest subarray sum is minimized.

    Approach:
    1. Calculate the sum of all array elements to set the upper limit
       for Binary Search.
    2. Use the isValid() function to check whether the array can be
       split into at most k subarrays within the given maximum sum.
    3. If the current maximum sum is valid, store it in ans and search
       the left half for a smaller answer.
    4. If the current maximum sum is invalid, search the right half
       for a larger answer.
    5. Return the minimum possible largest subarray sum.

    Time Complexity:
    O(n * log(sum)), where sum is the total of all array elements.

    Space Complexity:
    O(n) due to passing the vector by value in isValid().
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> nums, int k, int n, int max_allowed_sum) {

    int subArray = 1, sum = 0;

    for (int i = 0; i < n; i++) {

        if (nums[i] > max_allowed_sum) {
            return false;
        }

        if (sum + nums[i] > max_allowed_sum) {
            subArray++;
            sum = nums[i];
        }
        else {
            sum += nums[i];
        }
    }

    if (subArray > k) {
        return false;
    }
    else {
        return true;
    }
}

int splitArray(vector<int>& nums, int k) {

    int n = nums.size();

    if (k > n) return -1;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int st = 0, end = sum, ans = -1;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (isValid(nums, k, n, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter number of Elements: ";
    cin >> n;

    vector<int> nums;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        nums.push_back(x);
    }

    int k;

    cout << "Enter number for splitting: ";
    cin >> k;

    int ans = splitArray(nums, k);

    if (ans == -1) {
        cout << "Answer not found";
    }
    else {
        cout << "Ans: " << ans;
    }

    return 0;
}