class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> ans(2*nums.size());
        int n=0;

        for(int i = 0 ;i<nums.size();i++ )
        {
            ans[i]=nums[i];
            n++;
        }
       for(int i = 0 ;i<nums.size();i++ )
        {
            ans[i+n]=nums[i];
        }
        return ans;
    }
};