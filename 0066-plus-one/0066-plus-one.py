class Solution:
    def plusOne(self, digits):
        
        num = 0
        
        for digit in digits:
            num = num * 10 + digit
        
        
        ans = num + 1
        
        digits =[]
    
        while ans > 0:
            digits.append(ans % 10)
            ans //= 10
        
        
        digits.reverse()
        
        return digits
