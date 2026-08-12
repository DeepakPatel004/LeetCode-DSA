class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> arr;
       arr.push_back({1});

       for(int i=1; i<numRows; i++){

        int m = arr.size()-1;
        vector<int> sub;
        for(int j=0; j<i+1; j++){
            int num = 0;
            if(j-1>=0){num += arr[m][j-1];}
            if(j<m+1){num +=arr[m][j];}

            sub.push_back(num);
            
        }
        arr.push_back(sub);

       }

       return arr;

        
        
    }
};