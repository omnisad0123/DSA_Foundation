#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numOfPairs(vector<string>& target, string nums) {
        int ans = 0;
        for (int i = 0; i < target.size() - 1; i++) {
            for (int j = i + 1; j < target.size(); j++) {
                string s1 = target[i] + target[j];
                string s2 = target[j] + target[i];
                if (s1 == nums) {
                    ans++;
                }
                if (s2 == nums) {
                    ans++;
                }
            }
        }
        return ans;
    }
};

int main() {
    // Example input
    vector<string> target = {"abc", "def", "ghi", "jkl"};
    string nums = "defabc";

    // Create an instance of the Solution class
    Solution solution;

    // Call the numOfPairs function and output the result
    int result = solution.numOfPairs(target, nums);
    cout << "Number of pairs: " << result << endl;

    return 0;
}
