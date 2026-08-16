/*
# Product of Array Except Self - Brute Force

## Description

This program calculates the product of all elements in an array except the element at the current index.

For each element, it traverses the entire vector and multiplies every element whose index is different from the current index.

## Approach

1. Select an element at index `i`.
2. Traverse the entire vector using index `j`.
3. If `i != j`, multiply `nums[j]` into the current product.
4. Store the product in the result vector.
5. Repeat for every element.

## Time Complexity

- O(n²)

## Space Complexity

- O(1) extra space, excluding the output vector
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> product(vector<int>& nums){

    vector<int> answer;
    int n = nums.size();

    for(int i = 0; i < n; i++){

        int ans = 1;

        for(int j = 0; j < n; j++){

            if(i != j){
                ans *= nums[j];
            }
        }

        answer.push_back(ans);
    }

    return answer;
}
   

int main(){

    int n;

    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> nums;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++){

        int x;
        cin >> x;

        nums.push_back(x);
    }

    vector<int> result = product(nums);

    cout<<"Result: ";

    for(int i = 0; i < n; i++){
        cout<<result[i]<<" ";
    }

    return 0;
}