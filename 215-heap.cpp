// 34/41 test cases passed :(
class Solution {
public:
    int num(vector<int>& nums,int i){
        if(i>=0) {
            return nums[i];
        }
        else return INT_MIN;
    }
    int parent(int i){
        int ret = (int)(i+1)/2 - 1;
        if(ret>0) return ret;
        else return 0;
    }
    int lchild(int i, int max){
        int ret = (i+1)*2 -1;
        if(ret<max) return ret;
        else return -1;
    }
    int rchild(int i, int max){
        int ret = (i+1)*2 +1-1;
        if(ret<max) return ret;
        else return -1;
    }
    void swap(int* a, int* b) {
        int c = *a;
        *a = *b;
        *b = c;
    }
    int findKthLargest(vector<int>& nums, int k) {
        // lets do partial heap sort to find the kth largest    
        // make a max heap first then we can run the sort for k times? i guess
        for(int i = nums.size()-1; i>=0; i--){
            int j = i;
            //cout << "i is " << i << endl;
            while(nums[j]>nums[parent(j)] && j>0) {
                swap(&nums[j], &nums[parent(j)]);
                j = parent(j);
            }
        }

        //for(auto e: nums) cout<<e<< " "; cout << endl;
        int len = nums.size();
        for(int i =0;i<k-1; i++){
            // remove largest 
            swap(&nums[0], &nums[--len]);
            // adjust tree 
            int z = 0;
            while(lchild(z,len)>0 ){//|| rchild(z,len)>0){
                //cout << "adjusting" <<num(nums,lchild(z,len)) <<" "<< num(nums,rchild(z,len))<< endl;
                //for(auto e: nums) cout<<e<< " "; cout << endl;
                if(nums[z]<= num(nums,lchild(z,len))&&
                    num(nums,lchild(z,len))>=num(nums,rchild(z,len))){
                    swap(&nums[z], &nums[lchild(z,len)]);
                    z = lchild(z,len);
                }
                else if(nums[z]<= num(nums,rchild(z,len))&&
                num(nums,rchild(z,len))>num(nums,lchild(z,len))){
                    swap(&nums[z], &nums[rchild(z,len)]);
                    z = rchild(z,len);
                }
                else {
                    break;
                }
            }
            //for(auto e: nums) cout<<e<< " "; cout << endl;
        }
        for(auto e: nums) cout<<e<< " "; cout << endl;
       // cout 
        return nums[0];
    }
};
