class Solution {
public:
    string addBinary(string a, string b) {
        while (a.size() < b.size()) a = "0" + a;
        while (a.size() > b.size()) b = "0" + b;
        int tmp = 0;
        for (int i=a.size()-1; i>=0; i--) {
            int t = a[i] + b[i] + tmp - 48*2;
            a[i] = char(t%2 + 48);
            tmp = t > 1;
        }
        if (tmp==1) a = "1" + a;
        return a;
    }
};