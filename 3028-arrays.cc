class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
       int count = 0; 
        int sum = 0;
        for(auto e: nums){
            sum+=e;
            if(sum==0){
                count++;
            }
        }
        return count;
        
    }
};
