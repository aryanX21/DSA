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