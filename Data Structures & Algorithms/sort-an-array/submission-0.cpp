class Solution {
public:
    /*
        Time complexity: O(nlogn)
        Space complexity: O(1)
    */
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
};