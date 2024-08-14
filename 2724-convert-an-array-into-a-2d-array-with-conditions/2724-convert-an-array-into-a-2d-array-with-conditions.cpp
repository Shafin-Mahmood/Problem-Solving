class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        vector<vector<int>>v ;
        while(nums.size()>0)
        {
           set<int>s ;
           for(auto it=nums.begin();it!=nums.end();)
           {
            int val =*it;
            if(s.find(val)==s.end())
            {
                s.insert(val);
                nums.erase(it);
            }
           
            else
            it++;

           }

            v.push_back(vector<int>(s.begin(),s.end()));
        }
        return v;
    }
};