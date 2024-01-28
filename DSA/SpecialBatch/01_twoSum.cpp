// Problem link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int , int> frqMap;
        // this will make the hash table for the elements and the index of the array
        for(int i = 0 ; i< nums.size();i++)
        {
            frqMap[nums[i]] = i;
        }


        for(int i = 0;i<nums.size();i++)
        {
            int findThis = target - nums[i];
            if(frqMap.count(findThis) && frqMap[findThis] !=i )
            {
               ans.push_back(i);
               ans.push_back(frqMap[findThis]);
              return ans;
            }
        }

        return ans;
      

       
    }
};