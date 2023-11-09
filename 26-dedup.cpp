class Solution {
public:
    void swap(int* a, int* b){
        int c = *b;
        *b = *a;
        *a = c;
    }
    int removeDuplicates(vector<int>& nums) {
        int store = 0;
        while(true){
            int swapflag = 0;
            for(int i = store; i<nums.size(); i++) {
                if(nums[i] > nums[store]) {
                    swap(&nums[++store], &nums[i]);
                    swapflag++;
                    break;
                }
            }
            if(!swapflag){
                break;
            }
        }
        return store+1;
    }
};
