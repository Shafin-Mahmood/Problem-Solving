class Solution {
public:
    int smallestEvenMultiple(int n) 
    {
        return (n*2)/gcd(n, 2);
        
    }
};