class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        if(a[0]==b[0]){
            return a[1]<b[1];
        }
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ret;
        sort(intervals.begin(), intervals.end(), comp);
        int a = intervals[0][0], b = intervals[0][1];
        for(auto v: intervals){
            if(v[0]>b){
                ret.push_back({a,b});
                a = v[0];
                b = v[1];
            }
            else if(v[1]>b){
                b = v[1];
            }
        }
        ret.push_back({a,b});
        return ret;
    }
};
