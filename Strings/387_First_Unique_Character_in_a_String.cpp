class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        map<int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[s[i]]++;
        }

        for(int j=0; j<n; j++){
            if(mpp[s[j]]==1){
                return j;
            }
        }
        return -1;
    }
};
