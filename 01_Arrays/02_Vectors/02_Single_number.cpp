/*
Question:
Given a vector of integers where every element appears exactly twice
except for one element, find the element that appears only once.

Example:
Input:  {4, 1, 2, 1, 2}
Output: 4

Logic:
This program uses the XOR (^) operator.

XOR Properties:
1. a ^ a = 0
2. a ^ 0 = a

When all elements are XORed together, duplicate elements cancel
each other out and become 0. The remaining value is the unique element.

Example:
4 ^ 1 ^ 2 ^ 1 ^ 2
= 4 ^ (1 ^ 1) ^ (2 ^ 2)
= 4 ^ 0 ^ 0
= 4

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){

    int ans = 0;

    for(int val : nums){
        ans ^= val;
    }

    return ans;
}

int main(){

    int n;

    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> nums;

    cout<<"Enter elements: "<<endl;

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        nums.push_back(x);
    }

    cout<<"Single Number: "<<singleNumber(nums)<<endl;

    return 0;
}