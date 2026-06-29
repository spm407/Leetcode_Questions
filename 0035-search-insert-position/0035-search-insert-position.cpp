class Solution {
public:
    int searchInsert(vector<int>& nums, int ta) {
         int l=0;
         int r=nums.size()-1;
         while(l<=r){
            int m=(l+r)/2;
            if(nums[m]>=ta){
                r=m-1;
            }
            else{
                l=m+1;
            }
         }
         return l;
    }
};