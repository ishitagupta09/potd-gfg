class Solution {
  public:
  
    bool dfs(int node,int next , vector<int>&vis,vector<int> &hand , int gs, int cs){
        
        if(cs==gs)return true;
        else if(next==vis.size()) return false;
        else if(vis[next] || hand[node]+1!=hand[next]) return dfs(node,next+1,vis,hand,gs,cs);
        
        vis[next]=1;
        return dfs(next,next+1,vis,hand,gs,cs+1);

    }
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        vector<int> vis(N,0);
        for(int i=0;i<N;i++){
            if(!vis[i]){
                if(!dfs(i,i+1,vis,hand,groupSize,1)) return false;
            }
        }
        return true;
    }
};
