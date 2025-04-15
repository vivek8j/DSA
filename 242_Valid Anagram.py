class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        # sorted_s=sorted(s)
        # sorted_t=sorted(t)

        # return sorted_s==sorted_t

        count=defaultdict(int) #default make count as 0

        for x in s:
            count[x]+=1
        
        for x in t:
            count[x]-=1
        
        for val in count.values():
            if val!=0:
                return False
        

        return True


        
