class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int low = -1;
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                low = i-1;
                break;
            }
        }
        if (low == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        int sIndex=-1;
        for (int i = n-1; i > low; i--) 
        {
            if(nums[i]>nums[low])
            {
                sIndex=i;
                break;
            }
        }
        swap(nums[low],nums[sIndex]);
        reverse(nums.begin()+low+1,nums.end());
        return;
    }
};