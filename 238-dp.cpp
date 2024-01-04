class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftprod=1;
        int rightprod=1;
        vector<int> dp1={1};
        vector<int> dp2={};
        for(int i =0 ;i < nums.size()-1; i++ ){
            leftprod = leftprod * nums[i];
            dp1.push_back(leftprod);
        }
        dp2.push_back(1);
        for(int i =nums.size()-1 ; i>0; i-- ){
            rightprod = rightprod * nums[i];
            dp2.push_back(rightprod);

        }
        int i =dp2.size()-1;
        for(auto e: dp2){
            dp1[i--]*=e;
        }
        return dp1;
    }
};
