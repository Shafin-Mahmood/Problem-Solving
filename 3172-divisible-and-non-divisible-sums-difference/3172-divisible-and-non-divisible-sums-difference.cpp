class Solution {
public:
    int differenceOfSums(int n, int m) 
    {
        int num1 =0;
        int num2 =0;
        
        for(int i=1 ; i<=n ; i++)
        {
            if(i%m!=0 && m!= 0 )
            {
                num1 += i;
            }

            else if(i%m==0 && m!= 0 )
            {
                num2 += i;
            }
        }
         int ans= num1 - num2;
         return ans;
    }
};