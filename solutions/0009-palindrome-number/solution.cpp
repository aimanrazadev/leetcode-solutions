class Solution {
public:
    bool isPalindrome(int x) {
    long long int revnum = 0;
    int digit;
    int duplicate = x;
    while (x>0){
        digit = x%10;
        revnum = (revnum*10)+digit;
        x=x/10;
    } return duplicate == revnum;
    }
};
