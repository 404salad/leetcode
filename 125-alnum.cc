class Solution {
public:
    bool isPalindrome(string s) {
        int p1 = 0;
        int p2 = s.size()-1;
        bool ret = true;
        cout << s << endl;
        while(p2>p1){
            cout << p2 <<" " << p1 << endl;
            while(!isalnum(s[p2]) && p2>p1) p2--;
            while(!isalnum(s[p1]) && p2>p1) p1++;
            cout << p2 <<" " << p1 << endl;
            if(p2>p1){
                if(tolower(s[p2--])!=tolower(s[p1++])){
                    ret = false;
                    break;
                }
            }
        }
        return ret;
    }
};
