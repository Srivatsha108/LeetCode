class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        l=[]
        for i in set(arr):
            l.append(arr.count(i))
        if(len(set(l))==len(set(arr))):
            return True
        return False
        