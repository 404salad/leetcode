class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        String one="";
        String two="";
        for(String e: word1){
            one+=e;
        }
        for(String e:word2){
            two+=e;
        }
        return one.equals(two);
    }
}
