class Solution{
public:
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        // Code here
        //vector<vector<bool>>vis(n,vector<bool>(m,false));
        vector<vector<int>>ans(n,vector<int>(m,-1));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(c[i][j]=='N' )
                {
                    ans[i][j]=0;
                    
                }
                if(c[i][j]=='W')
                {
                    q.push({{i,j},0});
                    ans[i][j]=0;
                    
                }
                if(c[i][j]=='.')
                {
                    ans[i][j]=-10;
                }
            }
        }
        
        while(!q.empty())
        {
            auto top = q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int newx = top.first.first + dx[i];
                int newy = top.first.second + dy[i];
                int dist = top.second;
               
                if(newx>=0&&newy>=0&&newx<n&&newy<m&&c[newx][newy]!=0)
                {
                    int canbe = dist+2;
                    if(ans[newx][newy] > canbe || ans[newx][newy]==-1)
                    {
                        ans[newx][newy]=canbe;
                        q.push({{newx,newy},canbe});
                    }
                    else if(ans[newx][newy] == -10)
                    {
                        ans[newx][newy]=0;
                        q.push({{newx,newy},canbe});
                    }
                    
                }
            }
            
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ans[i][j]==-10)
                {
                    ans[i][j]=0;
                }
            }
        }
        return ans;
    }
};
