class Solution {
public:
    /*
        This method will only work for sorted arrays 

        OPTIMAL CODE 
            1. Time complexity: O(n)
            2. Space complexity: O(1)
    */

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        int start = 0, end = n - 1;
        while(start < end) {
            int sum = nums[start] + nums[end];
            if(sum == target) {
                return {start, end};
            }
            else if(sum < target) {
                start = start + 1;
            }
            else if(sum > target) {
                end = end - 1;
            }
        }

        return {-1, -1};
    }
};
