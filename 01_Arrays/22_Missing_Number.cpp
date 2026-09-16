#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int>& nums) {

    int n = nums.size();
        
    int actualsum = 0;
    int sum = (n * (n + 1)) / 2;

    for(int i = 0; i < n; i++){
        actualsum += nums[i];
    }

    int x = sum - actualsum;

    return x;
}

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    vector<int> nums;

    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;

        nums.push_back(x);
    }

    cout<<"Missing number: "<<missingNumber(nums);

    return 0;
}