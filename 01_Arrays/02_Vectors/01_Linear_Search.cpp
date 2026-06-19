#include<iostream>
#include<vector>
using namespace std;

int Search(vector<int> &nums, int a){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == a){
            return i;
        }
    }

    return -1;

}

int main(){

    int n;

    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> nums;

    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        nums.push_back(x);
    }

    int a;
    cout<<"Enter number to search: ";
    cin>>a;

    int index = Search(nums, a);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;
    

    return 0;

}