#include<iostream>
using namespace std;

int main(){

    // O(1) -  constant
     
    int n;
    cin>>n;
    cout<<"sum: "<<n * ( n + 1)/2<<endl;

    // O(n) - linear

    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    cout<<"n! = "<<fact<<endl;

    // O(n^2) - 
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // O(n^3) - 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    }

}