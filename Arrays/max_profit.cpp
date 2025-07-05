#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bb = prices[0], mp = 0;
        for(int i = 1; i < prices.size(); i++) {
            mp = max(mp, prices[i] - bb);
            bb = min(bb, prices[i]);
        }
        return mp;
    }
};
