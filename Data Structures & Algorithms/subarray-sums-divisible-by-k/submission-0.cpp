// ios_base::sync_with_studio(false); cin.tie(NULL);

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int n = nums.size(),c=0;
        long long currSums = 0;
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            currSums+=nums[i];
            if(currSums%k == 0) c++;
            int diff = currSums%k;
            c += mp[diff];
            mp[diff]++;

        }

        return c;
    }
};