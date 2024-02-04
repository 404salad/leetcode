class Solution(object):
    def minimumTimeToInitialState(self, word, k):
        """
        :type word: str
        :type k: int
        :rtype: int
        """
        wordog = word
        for i in range(0, len(word)):
            word = word[k:]+k*"."  
            x= re.search(word,wordog)
            if(x):
                if(x.start()==0):
                    return i+1;
        return 0    
        
