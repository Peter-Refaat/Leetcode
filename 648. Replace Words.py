class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        l = sentence.split()
        ans = ""
        for word in l:
            s = ""
            for ch in word:
                s+=ch
                if s in dictionary:
                    break
            ans = ans + s + ' '
        return ans[:-1]
