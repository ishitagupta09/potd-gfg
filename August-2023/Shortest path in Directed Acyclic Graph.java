class Solution {
    public int[] shortestPath(int N,int M, int[][] edges) {
        int arr[][] = new int[N][N];
           
        for(int i=0;i<N;++i){
            for(int j=0;j<N;++j){
                arr[i][j] = 1000000007;
            }
        }
        
        for(int edge[]: edges){
            arr[edge[0]][edge[1]] = edge[2];
        }
        
        arr[0][0] = 0;
        
        for(int i=0;i<N;++i){
            for(int j=0;j<N;++j){
                arr[0][j] = Math.min(arr[0][i] + arr[i][j], arr[0][j]);
            }
        }
        
        for(int i=0;i<N;++i){
            for(int j=0;j<N;++j){
                arr[0][j] = Math.min(arr[0][i] + arr[i][j], arr[0][j]);
            }
        }
        
        for(int i=0;i<N;++i){
            if(arr[0][i] == 1000000007) arr[0][i] = -1;
        }
        
        arr[0][0] = 0;
        
        return arr[0];
    }
}
