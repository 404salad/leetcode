class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,char> mip;
        unordered_map<char,char> mip2;
        for(int i = 0; i<s.size(); i++) {
            if(mip[s[i]] && mip[s[i]]!=t[i]){
                return false;
            }
            if(mip2[t[i]] && mip2[t[i]]!=s[i]){
                return false;
            }
            mip[s[i]] = t[i];
            mip2[t[i]] = s[i];
        }
        return true;
    }
};
