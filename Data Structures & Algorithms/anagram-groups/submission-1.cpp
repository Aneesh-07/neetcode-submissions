class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string,vector<string>> mp;

        // for(int i;i<strs.size();i++){
        //     string temp =strs[i];
        //     sort(temp.begin(),temp.end());
        //     mp[temp].push_back(strs[i]);
        // }
        // vector<vector<string>> ans;
        // for(auto i:mp){
        //     ans.push_back(i.second);
            
        // }

        // return ans;

        unordered_map<string,vector<string>> mp;


        for(auto i:strs){
        string keys(26,0);
            for(auto j:i){
                    keys[j-97]++;
            }
            mp[keys].push_back(i);
        }


        vector<vector<string>> ans;
        for(auto i:mp){
            ans.push_back(i.second);
            
        }
        return ans;




        
    }
};
