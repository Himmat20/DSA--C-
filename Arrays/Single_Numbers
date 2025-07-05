#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val; // XOR cancels out duplicates
        }
        return ans;
    }
};
