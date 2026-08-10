class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];

        for(int i=1; i<nums.size(); i++){
            int current_max = max({nums[i], maxi*nums[i], mini*nums[i]});
            int current_min = min({nums[i], maxi*nums[i], mini*nums[i]});

            maxi= current_max;
            mini= current_min;

            ans=max(ans,maxi);
        }
        return ans;

    }
};
