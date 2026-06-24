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