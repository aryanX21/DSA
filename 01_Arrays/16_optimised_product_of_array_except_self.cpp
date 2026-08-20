/*
# Product of Array Except Self - Prefix and Suffix

## Description

This program calculates the product of all elements in an array except the element at the current index using the Prefix and Suffix approach.

Instead of calculating the product separately for every element, the program first stores the product of all elements to the left of each index and then multiplies it by the product of all elements to the right.

## Approach

1. Initialize the result vector with `1`.
2. Perform a left-to-right traversal to store prefix products.
3. Perform a right-to-left traversal to calculate suffix products.
4. Multiply the suffix product with the existing prefix product.
5. Return the resulting vector.

## Time Complexity

- O(n)

## Space Complexity

- O(1) extra space, excluding the output vector.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> product(vector<int>& nums){

    int n = nums.size();

    vector<int> answer(n, 1);
       
    for(int i = 1; i < n; i++){
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int suffix = 1;

    for(int i = n - 2 ; i >= 0 ; i--){
        suffix *=  nums[i + 1];
        answer[i] *= suffix;
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