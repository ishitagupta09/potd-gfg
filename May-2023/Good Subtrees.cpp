class Solution{
public:
int count=0;
    void solve(Node *root,int k,set<int>&s)
    {
        if(root==NULL)
        {
            return ;
        }
        s.insert(root->data);
        if(s.size()>k)
        {
            return ;
        }
        solve(root->left,k,s);
        solve(root->right,k,s);
    }
    int goodSubtrees(Node *root,int k){
        // Code here
        if(root==NULL)
        {
            return 0;
        }
        set<int>s;
        
        solve(root,k,s);
        if(s.size()<=k)
        {
            count=count+1;
        }
        goodSubtrees(root->left,k);
        goodSubtrees(root->right,k);
        return count;
    }
};
