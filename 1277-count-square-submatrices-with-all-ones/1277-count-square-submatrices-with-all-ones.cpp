class Solution {
public:
    int countSquares(vector<vector<int>>& ma) {
        int n = ma.size();
        int m = ma[0].size();
        vector<vector<int>> vis = ma;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (vis[i][0] == 1)
                ans += vis[i][0];
        }
        for (int i = 1; i < m; i++) {
            if (vis[0][i] == 1)
                ans += vis[0][i];
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (vis[i][j] == 1) {
                    vis[i][j]= min(vis[i - 1][j - 1],
                               min(vis[i - 1][j], vis[i][j - 1])) +
                           1;
                           ans+=vis[i][j];
                }
            }
        }
        return ans;
    }
};