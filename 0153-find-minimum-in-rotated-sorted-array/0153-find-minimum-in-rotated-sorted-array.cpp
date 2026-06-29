class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MAX;
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            ans=min(ans,nums[m]);
            if(nums[l]<nums[m]){
                ans=min(ans,nums[l]);
                l=m+1;
            }
            else{
                  ans=min(ans,nums[l]);
                  l=l+1;   
            }
        }
        return ans;
    }
};