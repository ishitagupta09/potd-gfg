class pair{
    int first, second, third;
    pair(int a, int b, int c) {
        first = a;
        second = b;
        third = c;
    }
}

class Solution {
    int shortestDistance(int N, int M, int A[][], int X, int Y) {
        // code here
        Queue<pair> q = new LinkedList<>();
        q.add(new pair(0,0,0));
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};
        
        while(q.size() != 0) {
            pair temp = q.remove();
            int dis = temp.first;
            int i = temp.second;
            int j = temp.third;
            
            if( i == X && j == Y) return dis;
            for(int k =0; k<4; k++){
                int newi = i+dx[k];
                int newj = j + dy[k];
                
                if(newi >= 0 && newj >= 0 && newi < N && newj < M && A[newi][newj] == 1) {
                    A[newi][newj] = 0;
                    q.add(new pair (dis +1, newi, newj));
                }
            }
        }
        return -1;
    }
};
