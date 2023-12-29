class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int len = nums.size(); 
       unordered_map<int,int> cnt;
       for(auto e: nums){
          cnt[e]++;// amazing as it initializes to 0 if not initliazed
          if(cnt[e]>len/2){
              return e;
          }
       }
       return -1;
    }
};
