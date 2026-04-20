class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int i=0;
        int j=n-1;
        int maxi=INT_MIN;
       for(int i=0;i<n;i++){
        if(colors[i]!=colors[n-1]){
            maxi=max(maxi,n-1-i);
            break;
        }
       }
        for(int i=n-1;i>=0;i--){
        if(colors[0]!=colors[i]){
            maxi=max(maxi,i);
            break;
        }
       }

        return maxi;
    }
};