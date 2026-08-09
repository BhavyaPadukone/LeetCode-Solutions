class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
        }
        unordered_set<int> seen;
        for (pair<int,int> p : freq) {
        seen.insert(p.second);
        }
        return seen.size() == freq.size();
    }
};
