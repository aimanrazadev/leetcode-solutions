class Solution {
public:
    string reverseWords(string s) {
    int n = s.size();
    string answer = "";
    string wordss = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i<n; i++){
        while (i<n && s[i]!=' '){
            wordss+=s[i];
            i++;
        }
            if (!wordss.empty()) {
                reverse(wordss.begin(), wordss.end());
                if (!answer.empty()) answer += " ";  // avoid leading space
                answer += wordss;
                wordss = ""; // reset for next word
            }
    } return answer;
    }
};
