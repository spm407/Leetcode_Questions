class Solution {
public:
    
    int find(vector<int>& arr) {
        int n = arr.size();
        vector<int> right(n), left(n);
        stack<int> s;

      
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        while (!s.empty()) s.pop();

        
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;  
            int height = arr[i];
            ans = max(ans, width * height);
        }
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& ma) {
        int n = ma.size();
        int m = ma[0].size();

        vector<vector<int>> v(n, vector<int>(m));

      
        for (int j = 0; j < m; j++) {
            v[0][j] = ma[0][j] - '0';
        }

        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ma[i][j] == '1') {
                    v[i][j] = v[i-1][j] + 1;
                } else {
                    v[i][j] = 0;
                }
            }
        }

        int ans1 = 0;
        for (int i = 0; i < n; i++) {
            ans1 = max(ans1, find(v[i]));
        }

        return ans1;
    }
};