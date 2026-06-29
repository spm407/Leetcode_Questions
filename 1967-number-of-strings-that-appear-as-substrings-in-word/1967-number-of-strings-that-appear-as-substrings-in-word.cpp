class Solution {
public:
    int numOfStrings(vector<string>& pa, string wo) {
        int n=pa.size();
        int ans=0;
         for(int i=0;i<n;i++){
            if(wo.find(pa[i])!=string::npos){
                ans++;
            }
         }


        return ans;
    }
};