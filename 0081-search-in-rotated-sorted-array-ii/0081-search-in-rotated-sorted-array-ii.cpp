class Solution {
public:
    bool search(vector<int>& nums, int ta) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (nums[m] == ta)
                return true;
            if (nums[l] == nums[m]) {
                l = l + 1;
            } else if (nums[l] < nums[m]) {
                if (nums[l] <= ta && ta < nums[m]) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            } else {
                if (nums[l] == ta)
                    return true;
                l = l + 1;
            }
        }
        return false;
    }
};