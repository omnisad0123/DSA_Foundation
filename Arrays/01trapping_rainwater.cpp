#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftMax = 0, rightMax = 0;
        int left = 0, right = n - 1;
        int water = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    water += leftMax - height[left];
                }
                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    water += rightMax - height[right];
                }
                right--;
            }
        }

        return water;
    }
};

int main() {
    // Test case 1
    vector<int> height1 = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution sol;
    cout << "Test case 1: " << sol.trap(height1) << endl;

    // Test case 2
    vector<int> height2 = {4,2,0,3,2,5};
    cout << "Test case 2: " << sol.trap(height2) << endl;

    return 0;
}
