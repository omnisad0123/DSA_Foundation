#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans = "";
        int n = str.size();
        if (n == 0) return ans;

        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n - 1];

        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i]) {
                ans = ans + a[i];
            } else {
                break;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> strings = {"flower", "flow", "flight"};
    cout << "Longest common prefix: " << sol.longestCommonPrefix(strings) << endl;
    return 0;
}
