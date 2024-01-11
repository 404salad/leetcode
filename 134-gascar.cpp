class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total_gas=0, total_cost=0;
        int curr_gas=0, starting_point=0;

        for(int i = 0; i<n ;i++){
            // check for no case
            total_gas+=gas[i];
            total_cost+=cost[i];
            // check total gas present at index i
            curr_gas += gas[i] - cost[i];
            if(curr_gas<0){
                // breakdown, starting from next point
               starting_point = i+1; 
               // reset fuel
               curr_gas=0;
            }
        }
        return total_gas<total_cost ? -1 : starting_point;
    }
};
