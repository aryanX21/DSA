/*
Question:
Given a vector where each element represents the stock price on a particular day,
find the maximum profit that can be earned by buying one stock and selling it later.

Approach:
Brute Force

Logic:
1. Choose every day as the buying day.
2. Check every future day as the selling day.
3. Calculate the profit for each buy-sell pair.
4. Keep track of the maximum profit.

Example:
Input:
[7, 1, 5, 3, 6, 4]

Output:
5

Buy at 1
Sell at 6

Time Complexity: O(n²)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &prices){

    int maxProfit = 0;

    for(int buy = 0; buy < prices.size(); buy++){

        for(int sell = buy + 1; sell < prices.size(); sell++){

            int profit = prices[sell] - prices[buy];

            if(profit > maxProfit){
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
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