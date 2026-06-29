class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        for(auto i:nums) mp[i]++;
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        vector<int> ans;
        vector<vector<int>> count(nums.size()+1);

        for(auto i:mp){
            count[i.second].push_back(i.first);
        }
        for(int i=count.size()-1;i>=1;i--){
            for(auto j:count[i]){
                ans.push_back(j);
                if(ans.size() == k) return ans;
            }
        }


        // for(auto i:mp){

        //     // cout<<i.first<<"- "<<i.second<<endl;
        //     pq.push({i.second,i.first});
        //     if(pq.size()>k) {
        //     // cout<<pq.top().first<<" "<<pq.top().second;
        //     pq.pop();
        //     }
        // }



        // while(!pq.empty()) {
        //     int x = pq.top().second;
        //     ans.push_back(x);
        //     pq.pop();
            
        //     }

        return ans;

        
        

        
    }
};
