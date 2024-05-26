class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if(haystack==needle):
            return 0
        elif(needle in haystack):
            index = 0
            flag = False
            for i in range(len(haystack)):
                if(haystack[i]==needle[index]):
                    flag = True
                    index+=1
                else:
                    flag=False
                    index = 0

                if(index == len(needle)-1 and flag == True):
                    return i+2-len(needle)
                    
        else:
            return -1