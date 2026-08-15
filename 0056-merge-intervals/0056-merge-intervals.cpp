class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
       sort(intervals.begin(),intervals.end());
       int n = intervals.size();
       vector<int> prev = intervals[0];
        vector<vector<int>> mer;

        for(int i = 1 ; i< n;i++ ){
            vector<int> interval = intervals[i];
            if(interval[0] <= prev[1]){
                prev[1]= max(prev[1],interval[1]);
            
            }
            else{
                mer.push_back(prev);
                prev = interval;
            }

        }
        mer.push_back(prev);
        return mer;
    }
};