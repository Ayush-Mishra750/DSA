class Solution {
public:
vector<int>generate_row(int row){
    int val=1;
    vector<int>ans;
    ans.push_back(1);
    for(int col=1;col<row;col++){
        val=val*(row-col);
        val=val/col;
        ans.push_back(val);
    }
    return ans;
}
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(generate_row(i));
        }
        return ans;
    }
};