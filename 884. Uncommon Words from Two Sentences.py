class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        l1 = s1.split()
        l2 = s2.split()
        ans = []
        for word in l1:
            if word not in l2 and l1.count(word) == 1:
                ans.append(word)
        for word in l2:
            if word not in l1 and word not in ans and l2.count(word) == 1:
                ans.append(word)
        return ans
        
