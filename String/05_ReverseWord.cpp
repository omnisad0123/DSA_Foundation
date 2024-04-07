#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i = s.size() - 1;
        string ans = "";
        while (i >= 0) {
            if (s[i] == ' ') {
                i--;
                continue;
            }
            string str = "";
            while (i >= 0 && s[i] != ' ') {
                str = s[i] + str;
                i--;
            }
            ans = ans + str + " ";
        }
        ans.pop_back();
        return ans;
    }
};

int main() {
    Solution sol;
    string str = "the sky is blue";
    cout << "Reversed words: " << sol.reverseWords(str) << endl;
    return 0;
}
