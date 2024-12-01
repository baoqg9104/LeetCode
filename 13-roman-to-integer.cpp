class Solution {
public:
    int romanToInt(string s) {
        long long ans = 0;
        vector<int> a(1000, 0);
        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
        a['C'] = 100;
        a['D'] = 500;
        a['M'] = 1000;

        for (int i=s.size()-1; i>=0; i--) {
            if (i == s.size()-1) {
                ans += a[s[i]]; 
            } else {
            	if (a[s[i]] < a[s[i+1]]) {
            		ans -= a[s[i]];
				} else {
                    ans += a[s[i]];
                }
			}
        }
        return ans;
    }
};