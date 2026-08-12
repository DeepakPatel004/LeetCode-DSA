class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> arr;
       arr.push_back({1});

       for(int i=1; i<numRows; i++){

        int m = arr.size()-1;
        vector<int> sub(i+1,1);
        for(int j=1; j<i; j++){
            int num = 0;
            num += arr[m][j-1];
            num += arr[m][j];
            sub[j] = num;
            
        }
        arr.push_back(sub);

       }

       return arr;

        
        
    }
};