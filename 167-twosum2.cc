class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int mid = 0;
        int idx =0;
        for (int i = 0 ; i<numbers.size(); i++){
                
            // binary search target-numbers[i] in i+1 se number.len();
            int find = target - numbers[i];
            int lo = i+1;
            int hi = numbers.size()-1;
            int flag = false;
            while(lo<=hi){
                mid = lo+(hi-lo)/2;
                int midnumber = numbers[mid];
                if(midnumber == find){
                    idx = i;
                    flag = true;
                    break;
                }
                else if(midnumber>find){
                    hi = mid-1;
                }
                else{
                    lo = mid+1;
                }
                
            }
            if(flag)break;
            
        }
        vector<int> ans;
        ans.push_back(idx+1);
        ans.push_back(mid+1);
        return ans;
    }
};
