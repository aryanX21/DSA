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

    int maxSum = INT32_MIN;

    for(int st = 0; st < vec.size(); st++){

        int sum = 0;

        for(int end = st; end < vec.size(); end++){
            
               sum += vec[end];
               maxSum = max(sum, maxSum );
        }
    }

    cout<<"Maximum sum: "<<maxSum<<endl;

    return 0;
    
}