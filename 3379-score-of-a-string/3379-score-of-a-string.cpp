class Solution 
{
    public: 
    int scoreOfString(string s)
     {
        int ans = 0;
        
        for(int i=0 ; i<s.size()-1; i ++)
        {
            ans+= abs(static_cast<int>(s[i]) - static_cast<int>(s[i + 1]));
        }
        return ans;
    }
};