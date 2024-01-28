// https://leetcode.com/problems/reverse-string/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int lp = 0 , hp = s.size() -1;
        while(lp < hp)
        {
            swap(s[lp] , s[hp]);
            lp++;hp--;
        }
    }
};