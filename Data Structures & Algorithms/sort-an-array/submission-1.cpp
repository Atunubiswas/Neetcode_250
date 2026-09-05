class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i <= n - 1; i++) {
            int minNumber = nums[i], minIndex = i;
            for(int j = i; j <= n - 1; j++) {
                if(nums[j] < minNumber) {
                    minNumber = min(minNumber, nums[j]);
                    minIndex = j;
                }
            }
            if(minIndex != i) {
                swap(nums[i], nums[minIndex]);
            }
        }

        return nums;
    }
};