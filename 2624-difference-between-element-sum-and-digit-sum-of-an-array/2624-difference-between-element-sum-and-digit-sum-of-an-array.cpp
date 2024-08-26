class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ans = 0;
        int digitSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans += nums[i];

            int num = nums[i];
            while (num > 0) {
                digitSum += num % 10;
                num /= 10;
            }
        }

        int difference = abs(ans - digitSum);
        return difference;
    }
};