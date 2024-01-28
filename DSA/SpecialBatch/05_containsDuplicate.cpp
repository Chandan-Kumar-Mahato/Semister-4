class Solution {
// problem link : https://leetcode.com/problems/contains-duplicate/
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> mySet(nums.begin() , nums.end());

        if(mySet.size() == nums.size())
        {
            return false;
        }
        else return true;
      
        
    }
};