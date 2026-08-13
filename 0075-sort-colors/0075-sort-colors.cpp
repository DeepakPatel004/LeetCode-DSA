class Solution {
public:
    void sortColors(vector<int>& nums) {
        int freq0 = 0;
        int freq1 = 0;
        int freq2 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){freq0++;}
            else if(nums[i]==1){freq1++;}
            else{freq2++;}
        }
        int k=0;
        while(freq0--){
            nums[k] = 0;
            k++;
        }
        while(freq1--){
            nums[k] = 1;
            k++;
        }
        while(freq2--){
            nums[k] = 2;
            k++;
        }
    }
};