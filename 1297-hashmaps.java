class Solution {
    public int maxFreq(String s, int maxLetters, int minSize, int maxSize) {
        HashMap<String,Integer> map= new HashMap<>();
        // ws is window size
        int max =0;
        int ws=minSize;
        for(int i =0; i<=(s.length()-ws); i++){
            String pusher="";
            int unique=0;
            for(int k = i; k<i+ws;k++){
                if(!pusher.contains(s.charAt(k)+"")) 
                    unique++;
                if(unique>maxLetters) break;
                pusher+=s.charAt(k);
                if(pusher.length()==minSize){
                    System.out.println(pusher);
                    map.put(pusher,map.getOrDefault(pusher,0)+1);
                }
            }

        }
        try{
            return Collections.max(map.values());
        }
        catch(Exception E){
            return 0;
        }

    }
}
