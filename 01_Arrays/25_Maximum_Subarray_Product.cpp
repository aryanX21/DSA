/*
    Maximum Product Subarray - Dynamic Programming Approach

    Description:
    This program finds the contiguous subarray with the maximum product.

    Approach:
    1. Maintain the maximum product ending at the current position.
    2. Maintain the minimum product ending at the current position.
    3. The minimum product is important because multiplying a negative
       number by a negative product can produce a large positive product.
    4. At each element, consider three possibilities:
       - The current element itself.
       - The previous maximum product multiplied by the current element.
       - The previous minimum product multiplied by the current element.
    5. Update the maximum and minimum products using these three values.
    6. Maintain a global maximum to store the best product found so far.

    Time Complexity:
    O(n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxProduct(vector<int>& nums) {

        int maxProduct = nums[0];
        int globalMAX = nums[0];
        int minProduct = nums[0];
       
        for(int i = 1; i < nums.size(); i++){

            int A = nums[i];
            int B = maxProduct * nums[i];
            int C = minProduct * nums[i];

            maxProduct = max({A,B,C});
            minProduct = min({A,B,C});  

            globalMAX = max(globalMAX, maxProduct);       
        }

        return globalMAX;
        
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

    cout<<"Maximum Product Subarray: "<<maxProduct(nums)<<endl;

    return 0; 
    
}