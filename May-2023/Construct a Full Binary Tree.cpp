class Solution{
  public:
    Node* help(int pre[], int m[], int &ind, int l, int h, int size){
        if(ind>=size || l>h) return NULL;
        
        Node* root= new Node(pre[ind]);
        ind++;
        
        if(l==h) return root;
        
        int i;
        for(i=l;i<=h;i++){
            if(m[i]==pre[ind]) break;
        }
        
        if(i<=h){
            root->left= help(pre,m,ind,i,h,size);
            root->right= help(pre,m,ind,l+1,h-1,size);
        }
        return root;
    }
    
    Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        int ind=0;
        return help(pre,preMirror,ind,0,size-1,size);
    }
};

