class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss;
        ss << x;
        string s = ss.str();

        string s1 = s;
        reverse(s.begin(), s.end());

        return s1 == s;
    }
};