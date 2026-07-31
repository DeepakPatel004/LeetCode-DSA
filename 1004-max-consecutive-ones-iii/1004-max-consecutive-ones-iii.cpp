class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        if(k==0){
            int ans = 0;
            int cnt1 = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]){
                    cnt1++;
                    ans = max(ans,cnt1);
                }
                else{cnt1=0;}
            }
            return ans;
        }
        int i=0;
        int j=0;
        int cnt1=0;
        int ans = 0;
        int kk= k;

        while(j<nums.size()){
            if(nums[j]==1){
                cnt1++;
                ans = max(ans,cnt1);
                
            }
            else if(k>0){
                cnt1++;
                k--;
                ans = max(ans,cnt1); 
               
            }
            else{
                while(i<j){
                    i++;
                    cnt1--;
                    if(nums[i-1]==0){
                        cnt1++;
                        break;
                    }
                }
                
            } 
            j++;
        }
        return ans;
        

        
    }
};