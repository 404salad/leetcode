class Solution {
    public boolean closeStrings(String word1, String word2) {
        ArrayList al = new ArrayList();
        if(word1.length()!=word2.length()) return false;
        int count1[] = new int[26];
        int count2[] = new int[26];
        for(char a: word1.toCharArray()) {
            count1[(int) a - 97]++;
        }
        for(char a: word2.toCharArray()) {
            count2[(int) a - 97]++;
        }
        // JUST CHECK ITERATE AND COUNT NONZEROS SHOULD
        // EQUAL
        int count = 0,totalcount=0;
        for(int i = 0; i<26; i++){
            if(count1[i]!=0) {
                count+=i;
                totalcount+=count1[i];
            }
            if(count2[i]!=0){
                count-=i;
                totalcount-=count2[i];
            }
            
        }
        System.out.println("total count is"+ totalcount);
        if(count!=0||totalcount!=0) return false;
        for(int i = 0; i<26; i++){
            for(int j = 0; j<26; j++){
                if(count1[i]==count2[j]){
                    count1[i]=0;
                    count2[j]=0;
                    break;
                }
            }
        }
        System.out.println(count);
        for(int e: count1) {
            System.out.print(e+" ");
            if(e!=0) return false;
        }
        return true;
    }
}
