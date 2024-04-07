#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int i = s.size() - 1;
        while (i >= 0) {
            if (s[i] == ' ') {
                i--;
                continue;
            }
            while (i >= 0 && s[i] != ' ') {
                ans++;
                i--;
            }
            break;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string str = "Hello World";
    cout << "Length of last word: " << sol.lengthOfLastWord(str) << endl;
    return 0;
}
