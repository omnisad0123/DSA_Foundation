#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = nums.size() - 2;
        int destination = nums.size() - 1;
        while (i >= 0) {
            if (nums[i] >= destination - i) {
                destination = i;
            }
            i--;
        }
        return destination == 0;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << "Can jump: " << boolalpha << sol.canJump(nums) << endl;
    return 0;
}
