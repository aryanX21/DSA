/*
Question:
Given a sorted vector of integers and a target value,
find two numbers whose sum is equal to the target.

Approach:
Two Pointer Technique

Logic:
1. Place one pointer at the beginning and one at the end.
2. Calculate the sum of both elements.
3. If the sum is greater than the target, move the right pointer left.
4. If the sum is smaller than the target, move the left pointer right.
5. If the sum equals the target, return the indices.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> &nums, int tgt){
    vector<int> ans;

    int n = nums.size(); 

    int sum, i = 0, j = n - 1; 

    while(i < j){

        sum = nums[i] + nums[j];

        if(sum > tgt){
            j--;
        }

        else if(sum < tgt){
            i++;
        }

        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main(){
    
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> nums;

    cout<<"Enter elements of vector: ";

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
        cout<<"Pair Found: ";
        cout<<"("<<ans[0]<<", "<<ans[1]<<")"<<endl;
    }

    else{
        cout<<"Target Not Found"<<endl;
    }

    return 0;
}