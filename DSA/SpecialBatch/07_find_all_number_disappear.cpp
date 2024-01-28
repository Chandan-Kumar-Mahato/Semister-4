// problem link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
          unordered_set<int> mySet(nums.begin() , nums.end()); 

        vector<int> ans ;
         for(int i = 0;i<nums.size();i++)
             {
           if(!mySet.count(i+1) )
             {
                ans.push_back(i+1);
             }
  }
    
    return ans;
    }
};