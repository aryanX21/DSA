/*
# Binary Exponentiation (Power Function)

## Description

This program calculates the value of **xⁿ** using the **Binary Exponentiation** (Fast Exponentiation) algorithm.

Instead of multiplying `x` by itself `n` times, the algorithm repeatedly squares the base and halves the exponent, reducing the number of operations significantly.

It also handles **negative exponents** by converting:

x⁻ⁿ = 1 / xⁿ

## Algorithm
1. Store the exponent in a variable (`binForm`).
2. If the exponent is negative:
   - Replace `x` with `1/x`.
   - Make the exponent positive.
3. While the exponent is greater than 0:
   - If the exponent is odd, multiply the answer by `x`.
   - Square the base.
   - Divide the exponent by 2.
4. Return the final answer.

## Time Complexity
- **O(log n)**

## Space Complexity
- **O(1)**

## Concepts Used
- Binary Exponentiation
- Bitwise/Mathematical Optimization
- Loop
- Conditional Statements
- Handling Negative Exponents
*/

#include<iostream>
using namespace std;

double mypow(double x, int n){

    double ans = 1;

    long long binForm = n;

    if(binForm < 0){
        x = 1/x;
        binForm = -binForm;
    }

    while (binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }

    return ans;
}

int main(){

    double x;
    int n;

    cout<<"Enter x: ";
    cin>>x;

    cout<<"Enter n: ";
    cin>>n;

    cout<<x<<"^"<<n<<" = "<<mypow(x,n)<<endl;

    return 0;
}