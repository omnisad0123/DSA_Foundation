class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for (const string& word : words) {
            if (word.size() != pattern.size()) continue;

            unordered_map<char, char> mapping;
            unordered_set<char> mapped;

            bool valid = true;
            for (int i = 0; i < pattern.size(); ++i) {
                char p = pattern[i];
                char w = word[i];

                if (mapping.count(p)) {
                    if (mapping[p] != w) {
                        valid = false;
                        break;
                    }
                } else {
                    if (mapped.count(w)) {
                        valid = false;
                        break;
                    }
                    mapping[p] = w;
                    mapped.insert(w);
                }
            }

            if (valid) ans.push_back(word);
        }
        return ans;
    }
};
