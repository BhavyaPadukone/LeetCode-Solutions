class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for(int i = 0; i < numRows; i++) {

            vector<int> row;
            long long result = 1;

            row.push_back(result);

            for(int j = 1; j <= i; j++) {

                result = result * (i - j + 1);
                result = result / j;

                row.push_back(result);
            }

            ans.push_back(row);
        }

        return ans;
    }
};
