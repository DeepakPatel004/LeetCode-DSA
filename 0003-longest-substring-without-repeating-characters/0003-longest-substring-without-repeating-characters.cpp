class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        set<int> st;
        int l = 0;
        int len = 0;
        int ans = 0;
        for(int r=0; r<n; r++){
            if(st.find(s[r])==st.end()){
                st.insert(s[r]);
                len++;
                ans = max(len,ans);
            }
            else{
                while(s[l]!=s[r]){
                    st.erase(st.find(s[l]));
                    l++;
                    len--;
                }
                l++;
            }
        }
        return ans;
    }
};