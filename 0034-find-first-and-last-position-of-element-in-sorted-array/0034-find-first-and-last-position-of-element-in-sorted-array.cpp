class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int ans1=-1;
        while(l<=r){
            int m=(l+r)/2;
            if(nums[m]==target){
                ans1=m;
                l=m+1;
            }
            else if(nums[m]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
         l=0;
         r=n-1;
        int ans2=-1;
        while(l<=r){

            int m=(l+r)/2;
            if(nums[m]==target){
                ans2=m;
                r=m-1;
            }
            else if(nums[m]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return {ans2,ans1};
    }
};