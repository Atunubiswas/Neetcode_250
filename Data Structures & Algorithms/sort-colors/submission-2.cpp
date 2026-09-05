class Solution {
public:
    /*
        Dutch national flag algorithm 
            Time complexity: O(n)
            Space complexity: O(1)
    */

    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int low = 0, mid = 0, high = n - 1;
        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                mid = mid + 1;
                low = low + 1;
            }
            else if(nums[mid] == 1) {
                swap(nums[mid], nums[low]);
                mid = mid + 1;
            }
            else if(nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high = high - 1;
            }
        }
    }
};