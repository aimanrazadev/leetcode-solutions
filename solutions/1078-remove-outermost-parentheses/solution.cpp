class Solution {
public:
    string removeOuterParentheses(string s) {
    string result = "";
    int counter = 0;
    for (int i = 0; i<s.size(); i++){
        if (s[i]=='(') {
            if (counter > 0) result += '(';
            counter++;
        } else {
            counter --;
            if (counter > 0) result +=')';
        }
    } return result;
    }
};
