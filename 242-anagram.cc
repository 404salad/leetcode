class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> keys;
        if(s.size()!=t.size()) return false;
        for(int i = 0; i<s.size(); i++) {
            keys[s[i]]++;
            keys[t[i]]--;
        }
        int sum = 0;
        for(auto pair: keys){
            if(pair.second<0) return false;
            sum += pair.second;
        }
        return sum==0;
    }
};
