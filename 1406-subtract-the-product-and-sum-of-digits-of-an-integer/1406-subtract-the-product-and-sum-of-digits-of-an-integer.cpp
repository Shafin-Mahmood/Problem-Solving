class Solution 
{
public:
    int subtractProductAndSum(int n)
   {
      vector<int> result ;
      
      while(n>0)
      {
         result.push_back(n%10);
         n/=10;

      }

        int product =1; 
        int sum = 0;
         
       for(int i=0 ; i<result.size();i++)
       {
        product*=result[i];
        sum+=result[i];
       }
     return product-sum;
   }
};