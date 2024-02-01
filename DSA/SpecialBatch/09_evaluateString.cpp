class Solution {
public:
    int precedence(char ch) {
        if (ch == '*' || ch == '/') {
            return 2;
        } else if (ch == '+' || ch == '-') {
            return 1;
        } else
            return 0;
    }
    int calculate(string s) {

        // first you have push this to stack as postfix
        stack<char> myStack;
        int flag = 0;
        string tm;
        for(auto ct : s) 
            if(ct == ' ') continue;
            else if(isdigit(ct)) tm += ct;
            else {
                tm += '|';                              // markers to separate numbers
                while(size(myStack) && precedence(ct) <= precedence(myStack.top())) 
                    tm += myStack.top(), myStack.pop();
                myStack.push(ct);
            }
        tm += "|";
        while (!myStack.empty()) {
            tm += myStack.top();
            myStack.pop();
        }

        cout << tm << "<->"<< endl;
        int res = 0;
        stack<int> num;
        for(int i = 0; i < size(tm); i++) 
            if(isdigit(tm[i])) {
                int cur = 0;
                while(i < size(tm) && isdigit(tm[i]))
                    cur = cur * 10 + (tm[i++] - '0');
                    cout << cur << " ";
                num.push(cur);
            }
            else {
                int num1 = num.top();num.pop();
                int num2 = num.top();num.pop();
                if(tm[i] == '-') num.push(num2 - num1);
                else if(tm[i] == '+') num.push(num2 + num1);
                else if(tm[i] == '*') num.push(num2*num1);
                else num.push(num2/num1);
            }
        
       return num.top();
    }
};