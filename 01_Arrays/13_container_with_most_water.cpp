/*
# Container With Most Water - Brute Force

## Description

This program finds the maximum amount of water that can be stored between two vertical lines represented by the elements of a vector.

The program checks every possible pair of lines. For each pair, it calculates the container's width and uses the smaller of the two heights to determine the amount of water it can hold.

## Approach

1. Select the first line using `i`.
2. Select every line after it using `j`.
3. Calculate the width as `j - i`.
4. Find the smaller height between `height[i]` and `height[j]`.
5. Calculate the area using `width × height`.
6. Keep track of the maximum area found.

## Time Complexity

- O(n²)

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

    for(int i = 0; i < n; i++){

        for(int j = i + 1; j < n; j++){

            int width = j - i;
            int h = min(height[i], height[j]);

            int vol = width * h;

            maxVol = max(maxVol, vol);
        }
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