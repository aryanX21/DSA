/*
Question:
Given an integer vector, find the maximum sum among all possible subarrays.

Approach:
Kadane's Algorithm

Logic:
1. Maintain a running sum while traversing the vector.
2. Add the current element to the running sum.
3. Update the maximum sum whenever a larger sum is found.
4. If the running sum becomes negative, reset it to 0 because a negative sum cannot contribute to a larger future subarray.

Example:
Input:
3 -4 5 4 -1 7 -8

Output:
15

Subarray:
[5, 4, -1, 7]

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int> &vec){

    int maxSum = INT32_MIN;

    int sum = 0;

    for(int val : vec){

        sum += val;
        maxSum = max(sum,maxSum);
        if(sum < 0){
            sum = 0;
        }       
    }

    return maxSum;
}


int main(){

    int n;

    cout<<"Enter the size of vector: ";
    cin>>n;

    vector<int> vec;

    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        vec.push_back(x);
    }   

    cout<<"Maximum Subarray sum: "<<maxSubarraySum(vec)<<endl;

    return 0;
    
}