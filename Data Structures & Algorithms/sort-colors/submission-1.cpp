class Solution {
public:
    /*
        By counting number of 0's 1's 2's in array 
            Time complexity: O(n + n) = O(2n)
            Space complexity: O(1)
    */

    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int countZeros = 0, countOnes = 0, countTwos = 0;
        for(int i = 0; i <= n - 1; i++) {
            if(nums[i] == 0) countZeros++;
            else if(nums[i] == 1) countOnes++;
            else countTwos++;
        }

        for(int i = 0; i <= n - 1; i++) {
            if(countZeros > 0) {
                nums[i] = 0;
                countZeros--;
            }
            else if(countOnes > 0) {
                nums[i] = 1;
                countOnes--;
            }
            else {
                nums[i] = 2;
                countTwos--;
            }
        }
    }
};