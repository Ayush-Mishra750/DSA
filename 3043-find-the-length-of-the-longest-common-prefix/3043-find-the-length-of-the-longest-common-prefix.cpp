class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string ,int>mpp;
        for(auto it:arr1){
          string str=to_string(it);
          string prefix="";
          for(auto ch:str){
            prefix+=ch;
              mpp[prefix]++;
          }
        }
        int ans=0;
        for(auto it:arr2){
            string str=to_string(it);
            string prefix="";
            for(auto ch:str){
                prefix+=ch;
                if(mpp.find(prefix)!=mpp.end()){
                    ans=max(ans,static_cast<int>(prefix.length()));
                }
            }
        }
        return ans;


    }
};