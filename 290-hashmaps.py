class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        sarray = s.split()
        if(len(sarray)!=len(pattern)):
            return False
        cors = {}
        cors1 = {}
        for i in range(len(pattern)):
            if(pattern[i] not in cors.keys()):
                cors[pattern[i]] = sarray[i]
            else:
                if cors[pattern[i]]!=sarray[i]:
                    return False
            if(sarray[i] not in cors1.keys()):
                cors1[sarray[i]] = pattern[i]
            else:
                if cors1[sarray[i]]!=pattern[i]:
                    return False
        return True


            

