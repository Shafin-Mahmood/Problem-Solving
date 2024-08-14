class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
       int maxwealth=0 ; 
       
       for(int i = 0 ; i<accounts.size(); i++)
       {
        int wealth = 0;
          for(int j=0;j<accounts[i].size();j++)
        {
               wealth+=accounts[i][j];
        }
            maxwealth = max(wealth,maxwealth);
       }
        return maxwealth;
    }
};