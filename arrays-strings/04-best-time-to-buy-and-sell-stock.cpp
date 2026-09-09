#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < prices.size(); i++) {
        maxProfitValue = max(maxProfitValue, prices[i] - minPrice);
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfitValue;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit: " << maxProfit(prices) << endl;

    return 0;
}