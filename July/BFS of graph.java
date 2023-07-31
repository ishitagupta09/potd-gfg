class Solution {
    public ArrayList<Integer> bfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {
        ArrayList<Integer> arr=new ArrayList<>();
        Queue<Integer> q=new LinkedList<>();
        boolean[] visit=new boolean[V];
        q.add(0);
        visit[0]=true;
        
        while(!q.isEmpty()){
            int curr=q.poll();
            arr.add(curr);
            
            for(int it:adj.get(curr)){
                if(!visit[it]){
                    visit[it]=true;
                    q.offer(it);
                }
            }
        }
        return arr;
    }
}
