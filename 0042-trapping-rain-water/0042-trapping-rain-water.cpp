class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
       int lmax=0;
       int rmax=0;
       long total=0;
        int l=0;
        int r=n-1;
        while(l<r){
            if(height[l]<=height[r]){
                if(lmax<height[l]){
                    lmax=height[l];
                }
                else{
                    total+=lmax-height[l];
                }
                l=l+1;
            }
            else{
                if(rmax<height[r]){
                    rmax=height[r];
                }
                else{
                    total+=rmax-height[r];
                }
                r=r-1;
            }
        }
        return total;
    }
};