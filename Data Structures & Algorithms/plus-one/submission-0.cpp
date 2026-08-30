class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        stack<int> st;
        int carry = 1;
        for(int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            if(sum > 9) {
                carry = sum / 10;
                sum = sum % 10;
                st.push(sum);
            }
            else {
                st.push(sum);
                carry = 0;
            }
        }

        if(carry != 0) {
            st.push(carry);
        }

        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};
