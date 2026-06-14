#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec1;  // empty vector 

    vector<int> vec2 = {1,2,3,4,5}; 

    cout<<vec2[0]<<endl;
    cout<<vec2[3]<<endl;

    //for each loop
    
    //       variable name 
    for( int i : vec2){             // in this loop 'i' gives the value at that index
        cout<<i<<" ";
    }

    cout<<endl;

    vector<int> vec3 (4,0);  /*  here 4 is the size of vector and 0 is used to 
                                 initiallize all values with 0 */

    for( int i : vec3){         
        cout<<i<<" ";
    }

   return 0;

}
