class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int minx = 0; 
        vector<int> xs;
        for(int i = 0; i<points.size(); i++) {
            if(points[i][1]!=0)
                xs.push_back(points[i][0]);
        }
       sort(xs.begin(),xs.end());
        for(int i = 0; i<xs.size()-1; i++){
            if(xs[i+1]-xs[i]!=0){
                minx = std::max(minx,xs[i+1]-xs[i]);
            }
        }
        return minx; 
    }
};
