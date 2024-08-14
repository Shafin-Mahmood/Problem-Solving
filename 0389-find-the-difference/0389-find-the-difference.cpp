class Solution {
public:
    char findTheDifference(string s, string t) 
    {   
       int ans =0 ;
       for(int i=0;i<s.length();i++)
       {
         ans+=s[i];
       }
       
       for(int i=0;i<t.length();i++)
       {
         ans-=t[i];
       }
       return char(abs(ans));
    }
};