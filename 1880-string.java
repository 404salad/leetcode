class Solution {
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
        String first="",second="",target=""; 
        for(char e: firstWord.toCharArray()){
          first+= ((int) e - 97);
        }
        for(char e: secondWord.toCharArray()){
          second+= ((int) e - 97);
        }
        for(char e: targetWord.toCharArray()){
          target+= ((int) e - 97);
        }
        return Integer.parseInt(first)+
        Integer.parseInt(second)==Integer.parseInt(target);
    }
}
