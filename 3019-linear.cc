class Solution {
public:
    int countKeyChanges(string s) {
        char a = s[0];
        int count = 0;
        for(int i = 1; i<s.size(); i++){
            a = tolower(a);
            s[i] = tolower(s[i]);
           if(a!= s[i]) {
              count++; 
           }
            a = s[i];
        }
        return count;
    }
};
