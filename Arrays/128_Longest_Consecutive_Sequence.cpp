class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int length =1;
        int maxLen =0;
        if(n==0){
            return 0;
        }
        for(int i=0 ; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            if(nums[i] +1 == nums[i+1] ){
                length++;
            }
            else{
                maxLen = max(maxLen, length);
                length = 1;
            }
        }
        maxLen = max(maxLen, length);
        return maxLen;
    }
};
