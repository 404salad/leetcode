class Solution {
public:
    int romanToInt(string s) {  
        unordered_map<char,int> val;
        int ans = 0;
        val['I']=1;
        val['V']=5;
        val['X']=10;
        val['L']=50;
        val['C']=100;
        val['D']=500;
        val['M']=1000;
        char prev = s[s.size()-1];
        ans+=val[prev];
        for(int i =s.size()-2; i>=0; i--){
            if(val[prev]<=val[s[i]]){
               ans+=val[s[i]]; 
            }
            else
                ans-=val[s[i]];
            prev = s[i];
        }
        return ans;
    }
};
