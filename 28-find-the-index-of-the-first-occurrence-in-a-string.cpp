public class Solution {
    public int StrStr(string haystack, string needle) {
        int j=0;
        int ans = -1;
        for (int i=0; i<haystack.Length; i++) {
            if (haystack[i] == needle[j]) {
                j++;
                if (j == needle.Length) {
                    ans = i-needle.Length+1;
                    break;
                }
            } else j=0;
        }

        return ans;
    }
}