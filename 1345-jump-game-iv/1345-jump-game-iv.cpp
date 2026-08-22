class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();

        vector<bool> visited(arr.size(),0);
        map<int,vector<int>>mp;

        for(int i=0; i<n;i++){
            mp[arr[i]].push_back(i);
        }

        queue<pair<int,int>> q;
        q.push({0,0});
         visited[0]=1;

        while(!q.empty()){
            auto pr = q.front();
            q.pop();
            
            int ind = pr.first;
            int dis = pr.second;
            if(ind == n-1){
                return dis;
            }
            for(auto x : mp[arr[ind]]){
                if(!visited[x]){
                    visited[x]=1;
                    q.push({x,dis+1});
                }
            }
            if(ind-1 >=0 && !visited[ind-1]){
                 visited[ind-1]=1;
                q.push({ind-1,dis+1});
            }
            if(ind+1 <n && !visited[ind+1]){
                 visited[ind+1]=1;
                q.push({ind+1,dis+1});
            }
            mp[arr[ind]].clear();
        }
        return INT_MAX;   
    }
};