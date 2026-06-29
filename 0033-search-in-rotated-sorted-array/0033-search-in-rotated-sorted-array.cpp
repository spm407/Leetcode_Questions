class Solution {
public:
    int search(vector<int>& nums, int ta) {
       
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(nums[m]==ta)return m;
            if(nums[l]<nums[m]){
                if(ta<nums[m]&&ta>=nums[l]){
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else{
                if(nums[l]==ta)return l;
                else{
                    l=l+1;
                }
            }
        }
        return -1;

    }
}; 