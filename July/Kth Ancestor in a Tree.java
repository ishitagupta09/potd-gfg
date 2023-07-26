class Solution
{
    public void solve(HashMap<Integer,Integer> map,Node root,int parent){
        if(root==null){
            return;
        }
        map.put(root.data,parent);
        solve(map,root.left,root.data);
        solve(map,root.right,root.data);
    }
    public int kthAncestor(Node root, int k, int node)
    {
        //Write your code here
        HashMap<Integer,Integer> map=new HashMap<>();
        solve(map,root,-1);
        int x=0;
        while(k>0&&x!=-1){
            x=map.get(node);
            k--;
            node=x;
        }
        return x;
    }
}
