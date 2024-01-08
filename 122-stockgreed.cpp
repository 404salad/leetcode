/*
i'll tell you the most basic thing to understand before doing any "Buy and Sell Stock" problem :-

Take ex :- [1,4,7,8,6,4]
if you take (1, 8) , diff = 7
or if you take (1, 4), (4, 7), (7, 8), diff = 3 + 3 + 1 = 7
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // detect all low to high swquences            
        int cost = 0;
        int prev = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i]>prices[i-1]){
                cost+=(prices[i]-prices[i-1]);
            }
        }
        return cost;
    }
        
};
