class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> countMap;
        for(int i = 0; i <= n - 1; i++) {
            countMap[nums[i]]++;
        }

        vector<pair<int, int> > storage;
        for(auto it: countMap) {
            storage.push_back({it.second, it.first});
        }

        sort(storage.rbegin(), storage.rend());

        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(storage[i].second);
        }

        return ans;
    }
};
