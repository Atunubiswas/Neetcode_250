class Solution {
public:
    /*
        Time complexity: O(n + n) = O(2n)
        Space complexity: O(1)
    */

    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int element, count = 0;
        for(int i = 0; i <= n - 1; i++) {
            if(count == 0) {
                element = nums[i];
                count = 1;
            }
            else {
                if(nums[i] == element) count++;
                else if(nums[i] != element) count--;
            }
        }

        count = 0;
        for(int i = 0; i <= n - 1; i++) {
            if(nums[i] == element) {
                count = count + 1;
            }
        }

        return count > n/2 ? element : -1;
    }
};   