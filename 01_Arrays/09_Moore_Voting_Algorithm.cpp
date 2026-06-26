/*
Question:
Given an integer vector, find the Majority Element.

A Majority Element is an element that appears more than n/2 times.

Approach:
Moore's Voting Algorithm

Logic:
1. Assume the first suitable element as the candidate.
2. Maintain a counter.
3. If the counter becomes 0, choose the current element as the new candidate.
4. If the current element matches the candidate, increment the counter.
5. Otherwise, decrement the counter.
6. After traversing the vector, the remaining candidate is the majority element.
   (If the problem does not guarantee a majority element, perform one more pass
   to verify the candidate.)

Example:
Input:
[2, 2, 1, 1, 1, 2, 2]

Output:
2

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


int Majorityelement(vector<int> &nums){

    int count = 0, ans = 0;

    for(int i = 0; i < nums.size(); i++){

        if(count == 0){
           ans = nums[i];
        }

        if(ans == nums[i]){
           count++;
        }

        else {
            count--;
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

    int Maj_Ele = Majorityelement(nums);

    cout<<"Majority Element: "<<Maj_Ele<<endl;

    return 0;
}