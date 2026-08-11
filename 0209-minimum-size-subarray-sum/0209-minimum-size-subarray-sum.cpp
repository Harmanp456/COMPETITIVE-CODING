class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum =0;
        int size=INT_MAX;
        int low=0;
        for(int high=0;high<nums.size();high++){
            sum+=nums[high];
        
            while(sum>=target){
                size=min(size,high-low+1);
                sum-=nums[low];
                low++; 
            }
        }
            return (size==INT_MAX)?0:size;

    }
};