class Solution
{
    //Function to return list containing vertices in Topological order. 
    static int[] topoSort(int V, ArrayList<ArrayList<Integer>> adj) 
    {
        // add your code here
        int n=adj.size();
        int[] ans=new int[n];
        Stack<Integer> s=new Stack<>();
        boolean[] visited=new boolean[n];
        
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                visited[i]=true;
                tsort(i,visited,adj,s);
            }
        }
        
        int k=0;
        while(!s.isEmpty()){
            ans[k++]=s.pop();
        }
        return ans;
    }
    static void tsort(int i, boolean[] visited, ArrayList<ArrayList<Integer>> adj, Stack<Integer> s){
        for(int x: adj.get(i)){
            if(visited[x]==false){
                visited[x]=true;
                tsort(x,visited,adj,s);
            }
        }
        s.push(i);
    }
}
