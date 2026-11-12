class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> freqMap;
        for(int i = 0; i <= s.size() - 1; i++) {
            freqMap[s[i]]++;
        }
        for(int i = 0; i <= t.size() - 1; i++) {
            freqMap[t[i]]--;
            if(freqMap[t[i]] == 0) {
                freqMap.erase(t[i]);
            }
        }

        return freqMap.size() == 0;
    }
};
