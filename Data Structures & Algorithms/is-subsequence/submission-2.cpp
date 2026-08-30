class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();

        unordered_map<char, int> countMap1;

        for(int i = 0; i <= n - 1; i++) {
            countMap1[s[i]]++;
        }

        for(int i = 0; i <= m - 1; i++) {
            if(countMap1.find(t[i]) != countMap1.end()) {
                countMap1[t[i]]--;
                if(countMap1[t[i]] == 0) {
                    countMap1.erase(t[i]);
                }
            }
        }

        return countMap1.size() >= 1 ? false : true;
    }
};