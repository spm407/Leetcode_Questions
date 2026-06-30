class Solution {
public:
    bool searchMatrix(vector<vector<int>>& ma, int t) {
        int n=ma.size();
        int m=ma[0].size();
        int l=0;
        int r=n*m-1;
        while(l<=r){
            int mid=(l+r)/2;
            int row=mid/m;
            int col=mid%m;
            if(ma[row][col]==t){
                return true;
            }
            if(ma[row][col]>t){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};