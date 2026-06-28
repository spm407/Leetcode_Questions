class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        vector<int> v = arr;
        sort(v.begin(), v.end());
        if (v[0] != 1) {
            v[0] = 1;
        }
        int ans = 1;
        int n = v.size();
        for (int i = 1; i < n; i++) {
            if ((v[i] - v[i - 1]) > 1) {
                v[i] = v[i - 1] + 1;
            }
            ans = max(ans, v[i]);
            cout << v[i] << " ";
        }
        return ans;
    }
};