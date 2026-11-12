class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        int prefixIndex = 0;
        // To access the elements of the first string of the strs vector 
        for(int i = 0; i < strs[0].size(); i++) {
            // To access elements of other strings except first string 
            for(int j = 1; j <= n - 1; j++) {
                if(strs[j][i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];
    }
};