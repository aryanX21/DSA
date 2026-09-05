/*
    Merge Sorted Array - Three Pointer Approach

    Description:
    This program merges two sorted arrays into nums1 in-place.
    Three pointers are used to compare the largest remaining elements
    from nums1 and nums2 and place the larger element at the end of nums1.

    Approach:
    1. Start i at the last valid element of nums1.
    2. Start j at the last element of nums2.
    3. Start k at the last position of nums1.
    4. Compare nums1[i] and nums2[j].
    5. Place the larger element at nums1[k] and move the corresponding pointer.
    6. Copy any remaining elements from nums2.

    Time Complexity:
    O(m + n)

    Space Complexity:
    O(1)
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){

    int i = m -1;
    int j = n - 1;
    int k = m + n - 1;

    while(i >= 0 && j >= 0){
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }

        else{
            nums1[k] = nums2[j];
            j--;
        }

        k--;
    }

    while(j >= 0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    for(int i = 0; i < nums1.size(); i++){
        cout<<nums1[i]<<" ";
    }

}


int main(){

    int y;

    cout << "Enter size of vector: ";
    cin >> y;

    vector<int> nums1(y, 0);

    int m;

    cout<<"Enter number of non-zero elements: ";
    cin>>m;

    cout << "Enter elements: ";

    for(int i = 0; i < m; i++){

        int x;
        cin >> x;

        nums1[i] = x;
    }

    int n = y - m;

    vector<int> nums2(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++){

        int x;
        cin >> x;

        nums2[i] = x;
    }

    merge(nums1, m, nums2, n);


   return 0;
}