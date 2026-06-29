class Solution {
public:
    int search(vector<int>& nu, int target) {
        int n=nu.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(nu[m]==target){
                return m;
            }
            if(target<nu[m]){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return -1;
    }
};