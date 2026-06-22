/*
Question:
Given a vector of integers and a target value,
return the indices of two numbers whose sum is equal to the target.

Approach:
Brute Force

Logic:
1. Traverse each element of the vector.
2. For every element, check all remaining elements.
3. If the sum equals the target, store the indices.
4. Return the indices immediately after finding the first valid pair.

Example:
Input:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]

Time Complexity: O(n²)
Space Complexity: O(1)
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> &nums, int tgt){
    vector<int> ans;

    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == tgt){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
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

    int tgt;

    cout<<"Enter Target: ";
    cin>>tgt;

    vector<int> ans = pairSum(nums, tgt);

    if(ans.size() == 2){
        cout<<"("<<ans[0]<<", "<<ans[1]<<")"<<endl;
    }

    else{
        cout<<"Target Not Found"<<endl;
    }

    return 0;
}