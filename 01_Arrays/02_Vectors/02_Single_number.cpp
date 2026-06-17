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