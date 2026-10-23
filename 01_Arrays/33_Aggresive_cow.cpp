/*
    Topic: Aggressive Cows using Binary Search

    Description:
    This program places cows in stalls such that the minimum distance
    between any two cows is maximized.

    Approach:
    1. Sort the stall positions in ascending order.
    2. Set the search range from 1 to the difference between the
       maximum and minimum stall positions.
    3. Use the isPossible() function to check whether all cows can
       be placed with at least the given minimum distance.
    4. If placement is possible, store the distance in ans and
       search for a larger distance.
    5. If placement is not possible, search for a smaller distance.
    6. Return the maximum possible minimum distance.

    Time Complexity:
    O(n log n + n log D), where D is the difference between the
    maximum and minimum stall positions.

    Space Complexity:
    O(1) auxiliary space, excluding the sorting algorithm's
    internal space requirements.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &nums, int n, int m, int mid){

    
    int cows = 1, lastPos = nums[0];

    for(int i = 1; i < n; i++){
        if(nums[i] - lastPos >= mid){
            cows++;
            lastPos = nums[i];
        }

        else continue;
    }

    if(cows < m){
        return false;
    }
    else return true;
}

int largestMin(vector<int> &nums, int n, int m){

    if(m > n) return -1;

    sort(nums.begin(), nums.end());

    int st = 1, end = nums[n - 1] - nums[0], ans = 0;

    while(st <= end){

        int mid = st + (end - st)/2;

        if(isPossible(nums,n,m,mid)){
            ans = mid;
            st = mid + 1;
        }

        else{
            end = mid - 1;
        }
    }

    return ans;

}



int main(){

    int n;
    cout<<"Enter number of Stalls: ";
    cin>>n;

    vector<int> nums;

    cout<<"Enter Positions of stalls: ";

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;

        nums.push_back(x);
    }

    int m;

    cout<<"Enter number of cows (>2): ";
    cin>>m;

    int ans = largestMin(nums, n, m);

    if(ans == -1){
        cout<<"Answer not found";
    }
    else cout<<"Ans: "<<ans; 

    return 0;
   
}