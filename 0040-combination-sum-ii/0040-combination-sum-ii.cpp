class Solution {
public:
void findCombinationSum(int ind,vector<int>&arr,int t,vector<int>&ds,vector<vector<int>>&ans){
   
        if(t==0){
            ans.push_back(ds);
            return;
        }
    
    for(int i=ind;i<arr.size();i++){
        if(i>ind &&arr[i]==arr[i-1])continue;
        if(arr[i]>t)break;
        ds.push_back(arr[i]);
        findCombinationSum(i+1,arr,t-arr[i],ds,ans);
        ds.pop_back();
    }


} 
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        findCombinationSum(0,candidates,target,ds,ans);
        return ans;
    }
}; 