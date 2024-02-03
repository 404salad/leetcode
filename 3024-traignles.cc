class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
       if(a>=(b+c) || c>=(b+a) || b>=(c+a)) {
          return "none";
       }
        if(a==b && b==c ){
            return "equilateral";
        }
        else if(a!=b && b!=c && c!=a){
            return "scalene";
        }
        else {
            return "isosceles";    
        }
    }
};
