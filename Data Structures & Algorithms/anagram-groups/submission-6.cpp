class Solution {
public:
    /*
        Time complexity: O(nlogn + m) where n = strs size and m = map size 
        Space complexity: O(m * n)
    */

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string, vector<string> > mpp;
        for(string s: strs) {
            string copy = s;
            sort(copy.begin(), copy.end());
            mpp[copy].push_back(s);
        }

        vector<vector<string> > ans;
        for(auto it: mpp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};