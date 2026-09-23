// ios_base::sync_with_stdio(false); cin.tie(NULL);
// #include<bits/stdc++.h>
// using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        long long sum = 0;
        int n = nums.size(),c = 0;

        // for(int i =0;i<n;i++){
        //     sum = 0;

        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];

        //         if(sum == k) c++;
        //     }
        // }

        // return c;
        

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum == k) c++;
            if(mp.find(sum-k)!=mp.end()){
                c+= mp[sum-k];
            }
                mp[sum]++;

        }

        return c;


    }
};