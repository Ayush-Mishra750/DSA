class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        sort(citations.begin(),citations.end());
        for(int i=0;i<n;i++){
            int H=n-i;
            if(citations[i]>=H){
                return H;
            }
        }
        return 0;
    }
};