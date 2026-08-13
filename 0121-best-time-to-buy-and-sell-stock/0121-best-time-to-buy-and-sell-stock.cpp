class Solution {
public:
    int maxProfit(vector<int>& p) {
        int max_profit = 0;
        int n = p.size();
        int mini = 1e9;

        for(int i=0; i<n; i++){
            mini = min(p[i],mini);
            int current = p[i] -mini;
            max_profit = max(max_profit,current);
        }
        
        return max_profit;
    }
};