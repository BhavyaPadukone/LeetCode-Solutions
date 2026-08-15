class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int maxCount=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){ 
                sum++;   
            }
            else{
                sum=0;
            }
            if(maxCount<sum){ 
                maxCount=sum;  
            }

        }
        return maxCount;
    }
};
