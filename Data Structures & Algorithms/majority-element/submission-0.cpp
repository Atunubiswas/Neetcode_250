class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i <= n - 1; i++) {
            int currentNumber = nums[i];
            int count = 0;
            for(int j = 0; j <= n - 1; j++) {
                if(nums[j] == currentNumber) {
                    count = count + 1;
                }
            }
            if(count > n/2) {
                return currentNumber;
            }
        }

        return -1;
    }
};