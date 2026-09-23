class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int len = 0,ans=0,l=0;
        int n = s.size();

        for(int r=0;r<n;r++){
            if(mp.find(s[r]) != mp.end()){
                l =max(mp[s[r]]+1,l);
            }
            mp[s[r]] =r;
            ans = max(ans,r-l+1);
        //    cout<<s[r]<<" "<<mp[s[r]]<<" "<<ans;
        }
        return ans;

        
    }
};
