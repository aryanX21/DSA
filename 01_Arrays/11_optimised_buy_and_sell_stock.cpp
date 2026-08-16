/*
# Buy and Sell Stock - Optimized Approach

## Description

This program finds the maximum profit that can be obtained by buying and selling a stock once.

The algorithm keeps track of the lowest stock price (`bestbuy`) seen so far. For each current price, it calculates the possible profit by selling at that price and updates the maximum profit found.

## Approach

1. Store the minimum buying price seen so far.
2. Calculate the profit if the stock is sold at the current price.
3. Update the maximum profit.
4. Update the minimum buying price.
5. Continue until all prices are checked.

## Time Complexity

- O(n)

## Space Complexity

- O(1)
*/

#include<iostream>
#include<vector>
using namespace std;


int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int maxprofit = 0; 
        int profit = 0;
        int bestbuy = prices[0];

        for(int i = 1; i < n; i++){


            if(bestbuy < prices[i]){
                profit = prices[i] - bestbuy;
            }

            maxprofit = max(profit,maxprofit);

            bestbuy = min(bestbuy,prices[i]);

        }
        
        return maxprofit;
    }

int main(){

    int n;

    cout<<"Enter size of vector: ";
    cin>>n;

    vector<int> prices;

    cout<<"Enter stock prices: ";

    for(int i = 0; i < n; i++){

        int x;
        cin>>x;

        prices.push_back(x);
    }

    cout<<"Maximum Profit: "<<maxProfit(prices)<<endl;

    return 0;
}