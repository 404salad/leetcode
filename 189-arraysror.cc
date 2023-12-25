class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> moo;
        int len = nums.size();
        if(len==1) return;
        k = k%nums.size();
        moo.insert(moo.begin(),nums.begin()+len-k, nums.end());
        moo.insert(moo.end(), nums.begin(), nums.begin()+len-k);
        nums=moo;
    }
};
