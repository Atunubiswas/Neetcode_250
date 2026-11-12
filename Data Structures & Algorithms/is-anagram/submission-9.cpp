class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        vector<int> hashArray(26, 0);
        for(int i = 0; i <= s.size() - 1; i++) {
            hashArray[s[i] - 'a'] += 1;
            hashArray[t[i] - 'a'] -= 1;
        }

        for(int i = 0; i <= 25; i++) {
            if(hashArray[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
 