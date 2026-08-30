class Solution {
public:
/*
    This solution will only work if the array is sorted in ascending order 

    Time complexity : O(n)
    Space complexity : O(1)
*/

    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0, end = n - 1;

        while(start < end) {
            int sum = arr[start] + arr[end];
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
