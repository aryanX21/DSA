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