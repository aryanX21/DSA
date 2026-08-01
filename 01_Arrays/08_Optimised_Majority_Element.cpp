/*
Question:
Given an integer vector, find the Majority Element.

A Majority Element is an element that appears more than n/2 times in the vector.
If no Majority Element exists, return -1.

Approach:
Sorting

Logic:
1. Sort the vector so that equal elements become adjacent.
2. Traverse the sorted vector and count consecutive occurrences of each element.
3. If the frequency of an element becomes greater than n/2, return that element.
4. If no element satisfies the condition, return -1.

Example:
Input:
[2, 2, 1, 1, 1, 2, 2]

After Sorting:
[1, 1, 1, 2, 2, 2, 2]

Output:
2

Time Complexity: O(n log n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int Majorityelement(vector<int> &nums){

    // sorting
    sort(nums.begin(), nums.end());

    int count = 1, ans = nums[0];

    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i - 1]){
            count++;
        }

        else{
            count = 1;
            ans = nums[i];
        }

        if(count > nums.size()/2){
            return ans;
        }
    }

    return -1;
 
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
    
    if(Maj_Ele == -1){
        cout<<"There is no Majority element"<<endl;
    }

    else{
        cout<<"Majority Element: "<<Maj_Ele<<endl;
    } 

    return 0;

}