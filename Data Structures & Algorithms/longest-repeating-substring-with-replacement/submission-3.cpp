class Solution {
public:

    int findmostfrequent(unordered_map<char,int> mp){
        int most = 0;
        for(auto i:mp) most = max(most,i.second);

        return most;
    }
    
    int characterReplacement(string s, int k) {
        vector<string> subs;
        int n = s.size();
        unordered_map<char,int> mp;
        int ans= 0;
        // for(int i=0;i<n;i++){
        //     string sub = "";
        //     int maxlen = 0;
        //     for(int j=i;j<n;j++){
        //         sub+=s[j];
        //         mp[s[j]]++;
        //         maxlen = max(maxlen,mp[s[j]]);
        //         // cout<<sub<<" "<< maxlen<<endl;

        //         int slen = j-i+1;
        //         if((slen - maxlen) <= k) ans = max(ans,slen);
        //     }
        // }
            
        int left = 0,right =0,mostfrequent = 0;

        while(right<n){
            mp[s[right]]++;
            mostfrequent = findmostfrequent(mp);
            int slen = right-left+1;
            int replacement = slen-mostfrequent;
            if(replacement <= k) ans = max(ans,slen);
            else
            {
                mp[s[left]]--;
                left++;
            }
            right++;

        }

        return ans;
    }
};
