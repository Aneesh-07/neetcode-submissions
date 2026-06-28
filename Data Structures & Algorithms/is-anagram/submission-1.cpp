class Solution {
   public:
    bool isAnagram(string s, string t) {
        // unordered_map<char, int> mp;
        int mp[26] ={0};
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]-97]++;
        }

        for (int i = 0; i < t.size(); i++) {
            mp[t[i]-97]--;
        }

        for (auto i : mp) {
            // cout<<i<<endl;
            if (i != 0) return false;
        }
        return true;
    }
};
