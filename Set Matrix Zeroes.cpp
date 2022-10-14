class Solution {
public:
    static void zero(int row,int col,int n,int m,vector<vector<int>>&M){
    for(int i=0;i<m;i++)
        M[row][i]=0;
    for(int i=0;i<n;i++)
        M[i][col]=0;
}
void setZeroes(vector<vector<int>>& matrix) {
    vector<pair<int,int>>ind;
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0)
                ind.push_back({i,j});
        }
    }
    for(int i=0;i<ind.size();i++)
        zero(ind[i].first,ind[i].second,n,m,matrix);

}
};
