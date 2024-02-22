class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int i = 0;
        for(auto e: nums) {
            if(m.count(e)) {
                if(abs(m[e]-i) <= k){
                    return true;
                }
            }
            m[e] = i;
            i++;
        }
        return false;
    }
};
