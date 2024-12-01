class Solution {
public:
    int lengthOfLastWord(string s) {
        int d=0;
        s = " " + s;
        for (int i=s.size()-1; i>=0; i--) {
            if (s[i]==' ') {
                if (d>0) {
                    break;
                }
            } else d++;
        }
        return d;
    }
};