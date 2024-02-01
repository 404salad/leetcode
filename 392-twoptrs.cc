class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ti= 0;
        int si = 0;
        while(si<s.size()){
            if(ti>=t.size()){
                return false;
            }
            if(s[si] == t[ti]){
                si++;
                ti++;
            }
            else {
                ti++;
            }
        }
        return true;
            
    }
};
