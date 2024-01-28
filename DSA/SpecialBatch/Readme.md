# Problems

## 1. [Finding the two Sum](https://leetcode.com/problems/two-sum/) 
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Example 1:**<br>
Input: `nums = [2,7,11,15], target = 9`  
Output: `[0,1]`  
Explanation: Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.


   
 ## 2. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

Given a string `s` containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

**Example 1:**<br>
Input: `s = "()"`  
Output: `true`

**Example 2:**<br>
Input: `s = "(]"`  
Output: `false`

    
## 3. [Reverse String](https://leetcode.com/problems/reverse-string/)

Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

**Example 1:**<br>
Input: `s = ["h","e","l","l","o"]`<br>
Output: `["o","l","l","e","h"]`


## 4. [Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/)

Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

**Example 1:**<br>
Input: nums = `[-4,-1,0,3,10]`<br>
Output: `[0,1,9,16,100]`<br>
Explanation: After squaring, the array becomes `[16,1,0,9,100]`.
After sorting, it becomes `[0,1,9,16,100]`.


## 5. [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

**Example 1:**<br>
Input: `nums = [1,2,3,1]`<br>
Output: `true`<br>

**Example 2:**<br>
Input: `nums = [1,2,3,4]`
Output: `false`


## 6. [Missing Number](https://leetcode.com/problems/missing-number/)

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

**Example 1:**<br>
Input: `nums = [3,0,1]`<br>
Output: `2`<br>
Explanation: `n = 3` since there are 3 numbers, so all numbers are in the range `[0,3]`. 2 is the missing number in the range since it does not appear in nums.

**Example 2:**<br>
Input: `nums = [0,1]`<br>
Output: `2`<br>
Explanation: `n = 2` since there are 2 numbers, so all numbers are in the range `[0,2]`. 2 is the missing number in the range since it does not appear in nums.



## 7. [Find all the Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/)

Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

**Example 1:**<br>
Input: `nums = [4,3,2,7,8,2,3,1]`<br>
Output: `[5,6]`<br>

**Example 2:**<br>
Input: `nums = [1,1]`
Output: `[2]`



## 8. [Move Zeroes](https://leetcode.com/problems/move-zeroes/)

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
>Note that you must do this in-place without making a copy of the array.

**Example 1:**<br>
Input: `nums = [0,1,0,3,12]`<br>
Output: `[1,3,12,0,0]`

**Example 2:**<br>
Input: `nums = [0]`<br>
Output: `[0]`