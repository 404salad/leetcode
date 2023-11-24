class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int i = 0;
        while(s1[i]==s2[i]&&s2[i]==s3[i]&&s1[i]!='\0'&&s2[i]!='\0'&&s3[i]!='\0'){
           i++; 
        }
        return i==0?-1:s1.length()-i+s2.length()-i+s3.length()-i; 
    }
};
