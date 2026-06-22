/*
Question:
Given a vector of integers and a target value,
find a pair of elements whose sum is equal to the target.

Approach:
Brute Force

Logic:
1. Traverse each element of the vector.
2. For every element, check all remaining elements.
3. If the sum of the pair equals the target,
   print the indices and values of the pair.
4. Stop searching once the first valid pair is found.

Example:
Input:
Vector = [2, 7, 11, 15]
Target = 9

Output:
Target Found!
Index of Pair: (0, 1)
Pair: (2, 7)

Time Complexity: O(n²)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;

    cout<<"Enter the size of vector: ";
    cin>>n;

    vector<int> vec;

    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        vec.push_back(x);
    }

    int tgt;

    cout<<"Enter Target: ";
    cin>>tgt;

    bool found = false;

    for(int i = 0; i < vec.size(); i++){

        for(int j = i + 1; j < vec.size(); j++){

            int sum = vec[i] + vec[j];

            if(sum == tgt){

                cout<<"Target Found!\n";

                cout<<"Index of Pair: "
                    <<"("<<i<<", "<<j<<")"<<endl;

                cout<<"Pair: "
                    <<"("<<vec[i]<<", "<<vec[j]<<")"<<endl;

                found = true;
                break;
            }
        }

        if(found){
            break;
        }
    }

    if(!found){

        cout<<"Target Not Found"<<endl;
    }

    return 0;
}