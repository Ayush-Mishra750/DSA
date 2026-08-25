class Solution {
public:
void reverse_find(vector<vector<int>>&matrix,int i){
    int l=0;
    int r=matrix[0].size()-1;
    while(l<r){
        int temp=matrix[i][r];
        matrix[i][r]=matrix[i][l];
        matrix[i][l]=temp;
        l++;
        r--;
    }
}
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       int m=matrix[0].size();
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          swap(matrix[i][j],matrix[j][i]);
        }
       }
       for(int i=0;i<n;i++){
        reverse_find(matrix,i);
       }
    }
};