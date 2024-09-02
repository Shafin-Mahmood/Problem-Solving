class Solution:
    def climbStairs(self, n) :
        if n == 1:
            return 1
        
        
        first_index=1
        second_index=1

        total = 0

        for i in range(n-1):
            total = first_index+second_index
            second_index=first_index
            first_index=total

        return total        
