class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        string1 = s1.split()
        string2 = s2.split()

        all_string = s1.split() +s2.split()

        counter=Counter(all_string)

        ans=[]

        for s, cnt in counter.items():

            if cnt == 1:
               ans.append(s)

        return ans
