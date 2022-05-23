def checkPalindrome(s):
    if s == s[::-1]:
        return len(s)
    else:
        return 0
    
class Solution:
    def longestPalindrome(self, s: str) -> str:
        k = {}
        maxi = 0
        maxs = ""
        
        if len(s) == 1:
            return s
        
        for j,i in enumerate(s):
            if i in k:
                k[i][0]=k[i][0]+1
                k[i][1].append(j)
            else:
                k[i]=[1,[j]]
                
        print(k)
           
        for i in k:
            if k[i][0]>1: 
                for l in range(0,len(k[i][1])):
                    for j in range(l+1,len(k[i][1])):
                        a = k[i][1][l]
                        b = k[i][1][j] + 1
                        res = checkPalindrome(s[a:b])
                        if maxi<res:
                            maxi = res
                            maxs = s[a:b] 
        if maxi == 0:
            return s[0]
        else:
            return maxs
