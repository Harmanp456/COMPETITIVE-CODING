class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int best = nums[0];       
        int worst = nums[0];     
        int ans = nums[0];        
        int min_ans = nums[0];   
        int sum = nums[0];        
        for (int i = 1; i < nums.size(); i++) {
            int a = nums[i];
            int b = nums[i] + best;
            best = max(a, b);          
            ans = max(best, ans);   

            int c = nums[i];
            int d = nums[i] + worst;
            worst = min(c, d);         
            min_ans = min(worst, min_ans); 

            sum += nums[i];          
        }

        // If all numbers are negative, return max directly
        if (ans < 0) return ans;

        // Otherwise, max of normal
        return max(ans, sum - min_ans);
    }
};
