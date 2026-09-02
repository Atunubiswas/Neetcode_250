class Solution {
public:
    /*
        We have to get rid of sort function so that we dont use extra logn time complexity 

        Time complexity: O(n * m) + O(n) 
                         First O(n * m) is -> n is for size of strs and m is the size of 
                         each character. then second O(n) is for map size because map 
                         size can be at most n.
        Space complexity: O(n * m)
    */

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > mpp;
        for(string s: strs) {
            vector<int> countMap(26, 0);
            for(char c: s) {
                countMap[c - 'a']++;
            }
            string key = "";
            for(int i = 0; i < 26; i++) {
                key += to_string(countMap[i]);
                key += ',';
            }
            mpp[key].push_back(s);
        }

        vector<vector<string> > ans;
        for(auto it: mpp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
