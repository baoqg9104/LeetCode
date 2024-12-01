class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    	for (int i=0; i<s.size(); i++) {
    		char x = s[i];
    		
    		if (x=='(' || x=='{' || x=='[') {
    			st.push(x);
			} else {
                

				if (st.size() == 0) return false;

                if (x==')' && st.top()!='('
                || x=='}' && st.top()!='{'
                || x==']' && st.top()!='[' 
                ) {
                    return false;
                }
				st.pop();
			}
		}
		
		return st.size() == 0;
    }
};