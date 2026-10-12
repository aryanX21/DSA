/*
    Topic: Allocate Books using Binary Search

    Description:
    This program allocates books among students in contiguous order
    such that the maximum number of pages assigned to any student
    is minimized.

    Approach:
    1. Calculate the total number of pages to set the upper search limit.
    2. Use Binary Search to find the minimum possible maximum pages.
    3. The isValid() function checks whether books can be allocated
       within the given page limit using at most m students.
    4. If the allocation is valid, store the answer and search left
       for a smaller page limit.
    5. If the allocation is invalid, search right for a larger limit.
    6. Return -1 if the number of students exceeds the number of books.

    Time Complexity:
    O(n * log(sum)), where sum is the total number of pages.

    Space Complexity:
    O(1) auxiliary space, excluding the input vector.
*/

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &nums, int n, int m, int mid){

    int stud = 1, pages = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] > mid) return false;

        if(pages + nums[i] <= mid){
            pages += nums[i];
        }

        else{
            stud++;
            pages = nums[i];
        }
    }

    if(stud > m){
        return false;
    }

    else return true;
}

int allocateBooks(vector<int> &nums, int n, int m){

    if(m > n) return -1;

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }

    int st = 0, end = sum;
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(isValid(nums,n, m, mid)){ //left search
            ans = mid;
            end = mid - 1;
        }

        else{ // right search
            st = mid + 1;
        }
    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter number of Books: ";
    cin>>n;

    vector<int> nums;

    cout<<"Enter number of pages in each book: ";

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;

        nums.push_back(x);
    }

    int m;

    cout<<"Enter number of students: ";
    cin>>m;

    int ans = allocateBooks(nums, n, m);

    if(ans == -1){
        cout<<"Answer not found";
    }
    else cout<<"Ans: "<<ans; 
    
}