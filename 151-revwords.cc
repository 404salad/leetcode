class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string word = "";
        s+=" ";
        for(auto e: s){
            if(e==' ') {
                if(word!=""){
                    ans = word + " " + ans;
                    word="";
                }
                continue;
            }
            word += e;
        }
        ans.pop_back();
        return ans; 
    }
};
