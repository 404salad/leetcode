class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ret;
       int left  = 0;
       int right = nums.size()-1;
       if(right==-1){
           ret.push_back(-1);
           ret.push_back(-1);
           return ret;
       }
       int mid = left+(right-left)/2;
       while(left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target){
                break;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else {
                right=mid-1;
            }
       } 
       if(nums[mid]!=target){
           ret.push_back(-1);
           ret.push_back(-1);
           return ret;
       }
       cout << "here"<< endl;
        int begin = mid;
        int end = mid;
        while(begin>=0 && nums[begin]==target){
            begin--;
        };
        while(end<=nums.size()-1 &&nums[end]==target){
            end++;
        };
        ret.push_back(begin+1);
        ret.push_back(end-1);
       return ret;
    }
};
