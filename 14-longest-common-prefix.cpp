class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
    	int ans = s[0].size();
        for (int i=1; i<s.size(); i++) {

            ans = min(ans, (int)s[i].size());

        	for (int j=0; j<s[i].size(); j++) {
        		if (s[i][j] != s[i-1][j]) {
        			ans = min(ans, j);
        			break;
				}
			}
		}


		
        string ss = "";
        for (int i=0; i<ans; i++) {
            ss += s[0][i];
        }
		return ss;
    }
};