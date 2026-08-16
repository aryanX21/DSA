/*
# Container With Most Water - Two Pointer Approach

## Description

This program finds the maximum amount of water that can be stored between two vertical lines using the Two Pointer approach.

Two pointers are placed at the beginning and end of the vector to start with the maximum possible width. For each pair, the area is calculated using the shorter of the two walls. The pointer at the shorter wall is then moved inward because the shorter wall limits the height of the container.

## Approach

1. Initialize two pointers at the beginning and end of the vector.
2. Calculate the width between the two pointers.
3. Find the shorter of the two walls.
4. Calculate the current container area.
5. Update the maximum area.
6. Move the pointer corresponding to the shorter wall.
7. Continue until the two pointers meet.

## Time Complexity

- O(n)

## Space Complexity

- O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxVolume(vector<int>& height){

    int maxVol = 0;
    int n = height.size();   
   
   int i = 0, j = n - 1;

    while(i < j){
        int width = j - i;
        int h = min(height[i],height[j]);
        int vol = width * h;
        maxVol = max(maxVol,vol);

        height[i] < height[j]? i++ : j--;
    }

    return maxVol;
}

int main(){

    int n;

    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> height;

    cout << "Enter heights of container: ";

    for(int i = 0; i < n; i++){

        int x;
        cin >> x;

        height.push_back(x);
    }

    cout << "Maximum Volume: " << maxVolume(height);

    return 0;
}