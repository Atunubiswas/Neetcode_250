class Solution {
public:
/*
    This solution will only work if the array is sorted in ascending order 

    Time complexity : O(n)
    Space complexity : O(1)
*/

    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();

        unordered_map<int, int> indexStorage;
        for(int i = 0; i <= n - 1; i++) {
            indexStorage[arr[i]] = i;
        }

        sort(arr.begin(), arr.end());
        int start = 0, end = n - 1;

        while(start < end) {
            int sum = arr[start] + arr[end];
            if(sum == target) {
                return {indexStorage[arr[start]], indexStorage[arr[end]]};
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
