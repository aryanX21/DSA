#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Size

    vector<char> vec1 = {'a', 'b', 'c', 'd', 'e', 'f'}; 

    cout<<"Size = "<< vec1.size() << endl;  // .size() is used to find size of vector




    // Push Back - Insert element at last in vector

    vector<int> vec2; // empty vector size = 0

    cout<<"Before push back -> "<<endl;

    cout<<"Size = "<< vec2.size() << endl;

    vec2.push_back(21);
    vec2.push_back(28);
    vec2.push_back(420);

    cout<<"After push back -> "<<endl;

    cout<<"Size = "<< vec2.size() << endl;


    // Pop Back - Remove last element from vector

    vec2.pop_back();

    cout<<"After pop back -> "<<endl;

    cout<<"Size = "<< vec2.size() << endl;



    // Front and Back - Prints first and last element of vector

    cout<<vec1.front()<<endl;
    cout<<vec1.back()<<endl;


    // at - Gives the element of vector at that index

    cout<<vec1.at(3)<<endl;
    cout<<vec1.at(2)<<endl;

    return 0;

}