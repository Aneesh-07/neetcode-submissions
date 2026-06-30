class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int left_pro = 1,n = nums.size();
        vector<int> right_prefix(nums.size(),1);
        right_prefix[n-1] = nums[n-1];
        for(int i=nums.size()-2;i>=0;i--){
            right_prefix[i] = nums[i]*right_prefix[i+1];

        }

        vector<int> ans(n,1);

        left_pro *= nums[0];
        ans[0] = right_prefix[1];
        for(int i=1;i<n-1;i++){
            ans[i] = left_pro*right_prefix[i+1];
            left_pro *= nums[i];
        }
        ans[n-1] = left_pro;
        return ans;


    }
};
