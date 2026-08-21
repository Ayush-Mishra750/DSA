class Solution {
public:
    int Nextnumber(int n){
        int ans=0;
            while(n>0){
                int a=n%10;
                
               ans+=a*a;
                n=n/10;
            }
            return ans;
    }
    bool isHappy(int n) {
       unordered_set<int> mpp;
       
        while(mpp.find(n)==mpp.end()){
           mpp.insert(n);
           n=Nextnumber(n);
           if(n==1)return true;
           
            
        }
        return 0;
    }

};