class Solution {
public:
    bool divides(string str1, string div){
        int strlen = str1.size();
        int divlen = div.size();
        if(strlen % divlen != 0) return false;
        for(int i=0;i<(strlen/divlen); i+=1) {
            if(str1.substr(i*divlen,divlen) != div) return false;
        }
        cout << "return true";
        return true;
    }
    string gcdOfStrings(string str1, string str2) {
        // make str1 bigger
        if(str1.size()<str2.size()){
            std::swap(str1,str2);
        }
        // max will be the full string
        int ws = 0;
        int s2size = str2.size();
        for(int i = 0; i<s2size; i++) {
            ws = s2size - i;
            if(divides(str1,str2.substr(0,ws)) && divides(str2,str2.substr(0,ws))){
               return str2.substr(0,ws);
            }
        }
        return "";
    }
};
