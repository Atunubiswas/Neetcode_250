class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        int firstInvalidIndex = -1;
        for(int i = 0; i <= n - 1; i++) {
            if(nums[i] == val) {
                firstInvalidIndex = i;
                break;
            }
        }

        if(firstInvalidIndex != -1) {
            for(int i = firstInvalidIndex + 1; i <= n - 1; i++) {
                if(nums[i] != val) {
                    swap(nums[i], nums[firstInvalidIndex++]);
                }
            }
        }

        return firstInvalidIndex == -1 ? n : firstInvalidIndex;
    }
};  