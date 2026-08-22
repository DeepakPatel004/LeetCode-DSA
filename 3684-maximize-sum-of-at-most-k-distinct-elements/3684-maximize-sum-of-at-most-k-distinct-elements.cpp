class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {

        set<int> s;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        for(auto it = s.rbegin(); it !=s.rend() && k--; it++){
            ans.push_back(*it);
        }
        return ans;
        
    }
};