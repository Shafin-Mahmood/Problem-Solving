class Solution {
public:
    int countDigits(int num) 
    {
        int original =num;
        int ans = 0;
          while (num > 0) 
          {
          
          int digit = num % 10; 
          if(digit!=0 && original%digit == 0)
          {
             ans++;
          }

         num /= 10;  

    }
    return ans;
  }
};