/*
Question:
Find the Majority Element in a vector.

A Majority Element is an element that appears more than n/2 times.

Approach:
Brute Force

Logic:
1. Select each element one by one.
2. Count its frequency in the entire vector.
3. If frequency becomes greater than n/2, return that element.
4. If no such element exists, return -1.

Example:
Input:
[2, 2, 1, 2, 3]

Output:
2

Time Complexity: O(n²)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int Majorityelement(vector<int> &nums){
 
    for(int val : nums){
        int count = 0;
        for(int i : nums){
            if(val == i){
                count++;
            }
        }

        if(count > nums.size()/2){
            return val;
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