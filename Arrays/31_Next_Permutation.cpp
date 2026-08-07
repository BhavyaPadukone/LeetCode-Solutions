class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int breakIndex =-1;
        for(int i=n-1; i>=1; i--){
            if(nums[i-1]<nums[i]){
                breakIndex = i-1;
                break;
            }
        }
        if(breakIndex != -1){
            for(int j=n-1; j>breakIndex; j--){
                if(nums[j]>nums[breakIndex]){
                    swap(nums[j],nums[breakIndex]);
                    break;
                }
            }
            reverse(nums.begin() + breakIndex + 1, nums.end());
        }

        if(breakIndex == -1){
            reverse(nums.begin(), nums.end());
        }

        
        
    }
};
