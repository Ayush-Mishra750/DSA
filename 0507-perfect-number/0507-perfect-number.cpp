class Solution {
public:
    bool checkPerfectNumber(int num) {
        int val=num;
        int ans=0;
        for(int i=1;i<=val/2;i++){
            if(val%i==0){
              ans=ans+i;
            }
            else{
                continue;
            }
        }
        return ans==num;
    }
};