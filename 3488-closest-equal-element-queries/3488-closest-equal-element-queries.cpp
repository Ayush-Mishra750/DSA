class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        vector<int>ans(n,-1);
        unordered_map<int,vector<int>>mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]].push_back(i);
        }

        for(auto it:mpp){
            auto& pos=it.second;
            int m=pos.size();
            if(m==1)continue;
            for(int i=0;i<m;i++){
                int curr=pos[i];
                int prev=pos[(i-1+m)%m];
                int distprev=abs(curr-prev);
                distprev=min(distprev,n-distprev);
                int next=pos[(i+1)%m];
                int distnext=abs(curr-next);
                distnext=min(distnext,n-distnext);

                ans[curr]=min(distprev,distnext);

            }
            
        }
        vector<int>res;
        for(auto it:queries){
            res.push_back(ans[it]);
        }
        return res;
    }
};