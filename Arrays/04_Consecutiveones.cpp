#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                ans++;
                mx = max(ans, mx); // Update mx with the maximum consecutive ones encountered so far
            } else {
                ans = 0; // Reset ans only when encountering a 0
            }
        }
        return mx;
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
    Solution sol;
    int maxConsecutiveOnes = sol.findMaxConsecutiveOnes(nums);
    cout << "Maximum consecutive ones: " << maxConsecutiveOnes << endl;
    return 0;
}
