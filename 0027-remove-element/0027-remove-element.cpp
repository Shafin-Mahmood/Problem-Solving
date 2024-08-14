class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int myarr = 0;

        for(int i = 0 ; i <nums.size(); i++)
        {
            if(nums[i]!= val)
            {
                nums[myarr] = nums[i];
                myarr ++;
            }
        }
        return myarr;
    }
};