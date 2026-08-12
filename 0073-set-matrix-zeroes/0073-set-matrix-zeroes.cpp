class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();

        bool flag = 0;

        for(int i=0; i<m; i++){
            if(arr[i][0]==0) flag = 1;
            for(int j=1; j<n; j++){
                if(arr[i][j]==0){
                    arr[i][0]=0;
                    arr[0][j]=0;
                }
            }
        }
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=1; j--){
                if(arr[i][0]==0 || arr[0][j]==0){
                    arr[i][j]=0;
                }
            }
            if(flag){
                arr[i][0]=0;
            }
        }
    }
};