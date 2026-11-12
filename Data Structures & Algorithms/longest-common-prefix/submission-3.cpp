class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        string prefix = strs[0];
        for(string s: strs) {
            int j = 0;
            while(j < min(prefix.size(), s.size())) {
                if(s[j] != prefix[j]) {
                    break;
                }
                j++;
            }
            prefix = s.substr(0, j);
        }

        return prefix;
    }
};