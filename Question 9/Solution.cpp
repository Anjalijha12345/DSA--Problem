//This code uses a stack to identify potential candidates for the k element in a 132 pattern.
//It iterates through the array in reverse order, keeping track of the maximum value of nums[k] (max_k).
//If a valid 132 pattern is found, the function returns true.
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>st;
        int thirdElement= INT_MIN; // Variable to track the maximum value of nums[k]
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<thirdElement) // If current element < max value of nums[k], we've found a 132 pattern
              return true;

            while(!st.empty() && st.top()< nums[i]){
                thirdElement = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
