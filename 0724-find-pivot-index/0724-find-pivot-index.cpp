class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>arrleft(n);
        vector<int>arrright(n);
        int i=0;
        int j=n-1;
        int sum1=0,sum2=0;
        while(i<n){
            sum1+=nums[i];
            arrleft[i]=sum1;
            sum2+=nums[j];
            arrright[j]=sum2;
            i++;
            j--;
        }
        for(int i=0;i<n;i++){
            if(arrleft[i]==arrright[i])return i;
        }
        return -1;
    }
};