class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;    
        if(nums.size()==1){
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        
        for(int i = 0; i<nums.size(); i++){
            int j = i;
            if(i<nums.size()-1){
                while(nums.at(i+1)==nums.at(i)+1){
                    i++;
                    if(i>=nums.size()-1) break;
                }
            }
            if(i == j){
                ans.push_back(to_string(nums.at(i)));
            }
            else {
                ans.push_back(to_string(nums.at(j))+"->"+to_string(nums.at(i)));
            }
        }
        return ans;
    }
};
