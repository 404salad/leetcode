class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candies;
        int len = ratings.size();
        
        for(int i = 0; i<len; i++){
            candies.push_back(1);
        }
            for(int i = 1; i<len; i++){
                if(ratings[i]>ratings[i-1] && candies[i]<=candies[i-1]){
                    candies[i] = candies[i-1]+1;

                }
            }
            for(int i = len-2; i>=0; i--){
                if(ratings[i]>ratings[i+1] && candies[i]<=candies[i+1]){
                    candies[i] = candies[i+1]+1;
                }
            }

        return std::accumulate(candies.begin(), candies.end(),0);
    }
};
