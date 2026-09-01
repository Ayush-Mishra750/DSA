class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
   int length=1;
   int count=0,x;
   int n=nums.size();
   if(n==0)
   return 0;
   unordered_set<int>st;
   for(int i=0;i<n;i++ ){
st.insert(nums[i]);
   }
   for(auto it:st){
    if(st.find(it-1)==st.end()){
        count =1;
        x=it;
        while(st.find(x+1)!=st.end()){
            count+=1;
            x=x+1;
        }
        length=max(length,count); 
           }
   }
   return length;
    }
};