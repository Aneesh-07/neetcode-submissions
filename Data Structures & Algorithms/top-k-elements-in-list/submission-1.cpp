class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i:nums) mp[i]++;
        vector<int> ans;

        for(auto i:mp){

            // cout<<i.first<<"- "<<i.second<<endl;
            pq.push({i.second,i.first});
            if(pq.size()>k) {
            // cout<<pq.top().first<<" "<<pq.top().second;
            pq.pop();
            }
        }

        while(!pq.empty()) {
            int x = pq.top().second;
            ans.push_back(x);
            pq.pop();
            
            }

        return ans;

        
        

        
    }
};
