class Solution {
public:
    /*
        Time complexity: O(n + n) = O(2n)
        Space complexity: O(n + n) + O(n) = O(3n)
    */

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string, vector<string> > mpp;
        for(int i = 0; i <= n - 1; i++) {
            string copy = strs[i];
            sort(copy.begin(), copy.end());
            mpp[copy].push_back(strs[i]);
        }

        vector<vector<string> > ans;
        for(auto it: mpp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
