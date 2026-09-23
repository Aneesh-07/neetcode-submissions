// ios_base::sync_with_stdio(false); cin.tie(NULL);
// #include<bits/stdc++.h>
// using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        long long sum = 0;
        int n = nums.size(),c = 0;

        for(int i =0;i<n;i++){
            sum = 0;

            for(int j=i;j<n;j++){
                sum+=nums[j];

                if(sum == k) c++;
            }
        }

        return c;
        
    }
};