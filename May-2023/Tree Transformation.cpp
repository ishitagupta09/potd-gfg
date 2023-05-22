class Solution {
    public:
    int solve(int N, vector<int> p){
        // code here
        vector<int> deg(N,0);
        int res=0;
        
        for(int i=1;i<N;i++){     //Counts the degree for each node
            deg[i]++;                  //We left index 0 since it has value=-1 and it is the root of the tree.
            deg[p[i]]++;
        }
        
        for(int i=0;i<N;i++)      //Counts the inner nodes
            if(deg[i]>1)
                res++;
        res=res==0? res:res-1;   //We have done res -1 coz, according to the logic, 0(which is the root of the tree) 
                                               //will also be considered as the internal node, so to eliminate this we do minus 1 to the result.
        return res;
    }
};
