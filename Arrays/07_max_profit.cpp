#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.size() <= 1) {
        return 0; // No profit can be made with less than 2 prices
    }

    int ans = prices[0];
    int mx = 0;

    for (int i = 1; i < prices.size(); i++) {
        mx = max(mx, prices[i] - ans);
        ans = min(ans, prices[i]);
    }

    return mx;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << maxProfit(arr) << endl;
    return 0;
}
