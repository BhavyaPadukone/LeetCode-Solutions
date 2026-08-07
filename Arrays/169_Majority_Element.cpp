class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int majority = INT_MIN;
        int max_fre =0;
        for(int i =0; i<nums.size(); i++){
            mpp[nums[i]]++;

            if(mpp[nums[i]]>max_fre){
                majority = nums[i];
                max_fre = mpp[nums[i]];
            }
        }
        return majority;
    }
};
