class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int n = intervals.size();
        for(int i=0; i<n; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(ans.empty()){
                ans.push_back({start,end});
            }
            else{
                if(ans.back()[1]>=start){
                    ans.back()[1] = max(end,ans.back()[1]);
                }
                else{
                    ans.push_back({start,end});
                }
            }
        }
        return ans;
    }
};
