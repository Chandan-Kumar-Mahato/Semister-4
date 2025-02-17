// problem link: https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum = 0;
        int n = nums.size();
       for(int i = 0;i<nums.size();i++)
       {
           sum = sum ^ (i+1);
           sum = sum ^ nums[i];
       }
       return sum;
    }
};