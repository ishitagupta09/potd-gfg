class Solution {
    public:
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    
    bool dfs(vector<vector<int>>& matrix, int N, int M, int x, int y){
        matrix[x][y] = 0;
        bool flag = (x==0 || x==N-1 || y==0 || y==M-1) ? false : true;
        for(int i=0; i<4; ++i){
            int x1 = x+dx[i], y1 = y+dy[i];
            if(x1>=0 && x1<N  && y1>=0 && y1<M && matrix[x1][y1]==1){
                flag &= dfs(matrix, N, M, x1, y1);
            }
        }
        return flag;
    }
    
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
        int cnt = 0;
        for(int i=0; i<N; ++i){
            for(int j=0; j<M; ++j){
                if(matrix[i][j]==1 && dfs(matrix, N, M, i, j)) cnt++;
            }
        }
        return cnt;
    }
};
