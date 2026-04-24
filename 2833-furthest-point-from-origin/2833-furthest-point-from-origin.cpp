class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int l=0;
        int r=0;
        int val=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(moves[i]=='L')l++;
            else if(moves[i]=='R')r++;
            else val++;
        }
         return ans=abs(l-r)+val;

       
    
    }
};