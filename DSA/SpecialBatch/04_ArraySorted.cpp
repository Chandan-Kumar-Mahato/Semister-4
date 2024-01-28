// https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> temp 
        for(int i = 0;i<nums.size() ; i++)
        {
            nums[i] = abs(pow(nums[i],2));
        }
        sort(nums.begin() , nums.end());

        return nums;
    }
};