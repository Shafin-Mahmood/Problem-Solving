class Solution {
public:
    int numberOfSteps(int num) 
    {
        int it=0;
        while(num>0)
        {
            if(num%2==0)
            {
                num/=2;
                it++;
            }
            else
            {
              num = num-1;
              it++;
            }
        }
        return it;
    }
};