class Solution {
public:
    int trap(vector<int>& height) {
        /* 
        amazing logic from the answer author
        finding the tallest then approching it from
        both sides but only filling as much as the 
        tallest from the current approach allows
        which makes sense as when we fixed the 
        tallest one we only need to fill water 
        upto the smaller one
        */
        if(height.size()<3) return 0;
        int tallest = 0;

        // finding index of the tallest
        for(int i = 0; i<height.size(); i++){
           if(height[tallest]<height[i]) tallest = i;
        }
        
        int water = 0;
        for(int i = 0, tall=0; i<tallest; i++) {
            if(tall < height[i]) tall = height[i];
            else water += tall-height[i];
        }
        for(int i = height.size()-1, tall=0; i>tallest; i--) {
           if(tall<height[i]) tall = height[i];
           else water += tall - height[i];
        }
        return water;
    }
};
