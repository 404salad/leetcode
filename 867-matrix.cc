class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans; 
        vector<int> th;
        for(int i = 0; i<matrix[0].size(); i++) {
            th={};
            for(int j = 0; j<matrix.size(); j++) {
                th.push_back(matrix[j][i]);
            }
            ans.push_back(th);
        }
        return ans;
    }
};
