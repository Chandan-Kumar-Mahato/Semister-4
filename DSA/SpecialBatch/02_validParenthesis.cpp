// problem link : https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        int ln = s.length();
        if(ln %2 !=0)
        {
            return false;
        }
            stack<char> bracStack ;
            for(int i = 0;i<s.length() ; i++)
            {
                // if you find the opening braces push to the top of the stack

                if(s[i] == '(' || s[i] == '{' || s[i] =='[')
                {
                    bracStack.push(s[i]);
                }
                else 
                {
                    if(bracStack.empty() || s[i] == ')' && bracStack.top() !='(' || s[i] == '}' && bracStack.top() != '{' || s[i] ==']' && bracStack.top() != '[')
                    {
                        return false;
                    }
                     bracStack.pop();
                }
            }
          return bracStack.empty();
    }
};