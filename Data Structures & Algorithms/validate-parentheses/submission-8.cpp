class Solution {
public:
    bool isValid(string s) {
        string brackets_check;
        bool closed = true;
        if(s.size() % 2) return false;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                brackets_check.push_back(s[i]);
            }
            if(s[i] == ')'){
                if(brackets_check.back() == '(') brackets_check.pop_back();
                else return false;
            }
            if(s[i] == '}'){
                if(brackets_check.back() == '{') brackets_check.pop_back();
                else return false;
            }
            if(s[i] == ']'){
                if(brackets_check.back() == '[') brackets_check.pop_back();
                else return false;
            }
        }
        if(brackets_check.size()) return false;
        return closed;
    }
};
