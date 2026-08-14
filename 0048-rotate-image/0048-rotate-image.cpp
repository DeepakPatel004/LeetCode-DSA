class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n  = matrix.size();
        vector<vector<int>> mat2;

        for(int j=0; j<n; j++){
            vector<int> sub;
            for(int i=n-1; i>=0; i--){
                sub.push_back(matrix[i][j]);
            }
            mat2.push_back(sub);
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                matrix[i][j] = mat2[i][j];
            }
        }
       
        
    }
};