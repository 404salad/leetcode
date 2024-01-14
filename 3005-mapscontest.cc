class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int,int> freq;
        int maxfreq= 0;
        for(auto e: nums){
            freq[e]++;
            maxfreq=max(maxfreq,freq[e]);
        }
        int ret = 0;
        for(auto e: nums){
            if(freq[e]==maxfreq)
                ret++;
        }
        return ret;
    }
};
