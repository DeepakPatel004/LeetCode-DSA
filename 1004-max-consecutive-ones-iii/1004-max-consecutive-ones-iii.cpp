class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int ans= 0;
        int zeros = 0;
        for(int r = 0; r<nums.size(); r++){
            if(nums[r]==0){
                zeros++;
            }
            if(zeros>k){
                while(zeros>k){
                    if(nums[left]==0){
                        zeros--;
                    }
                     left++;
                }
            }
            ans = max(ans,r-left+1);

        }
        return ans;
        
        
    }
};