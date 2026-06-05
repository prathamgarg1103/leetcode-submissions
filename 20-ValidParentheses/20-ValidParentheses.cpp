// Last updated: 6/5/2026, 12:18:04 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch=='{'||ch=='['||ch=='('){
                st.push(ch);
            }else{
                if(st.empty())return false;
                if(ch == ')' && st.top() != '(') return false;
                if(ch == '}' && st.top() != '{') return false;
                if(ch == ']' && st.top() != '[') return false;
                st.pop();
            }
        }return st.empty();
    }
};