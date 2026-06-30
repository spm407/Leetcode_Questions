class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int a = 0, b = 0, c = 0;
        int l = 0;
        int r = 0;
        int ans = 0;
        while (r <= n &&l<=r) {
            if (a == 0 || b == 0 || c == 0) {
                if (s[r] == 'a') {
                    a++;

                } else if (s[r] == 'b') {
                    b++;

                } else {
                    c++;
                }
                
                    r++;
                 
            } else {
                ans++;
                ans += n  - r;
               
                if (s[l] == 'a') {
                    a--;

                } else if (s[l] == 'b') {
                    b--;

                } else {
                    c--;
                }
                l++;
            }
        }
        return ans;
    }
};