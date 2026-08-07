class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a =nums1.size();
        int b =nums2.size();
        int j=1;
        for(int i=a-b ; i<a; i++){
            int temp=0;
            nums1[i]=nums2[b-j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
    } 
};
