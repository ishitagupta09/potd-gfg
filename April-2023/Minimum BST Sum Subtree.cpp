class Solution {
public:
    bool isbst(Node *root,int &le,int left,int right){
        if(!root)return true;
        le+=1;
        if(root->data<=left || root->data>right)return false;
        bool t=false,tt=false;
        t=isbst(root->left,le,left,root->data);
        tt=isbst(root->right,le,root->data,right);
        return t&&tt;
    }
    int summ(Node *root,int &id,int &target){
        if(!root)return 0;
        int l=0,r=0;
        if(root->left)l=summ(root->left,id,target);
        if(root->right)r=summ(root->right,id,target);
        int le=0;
        if(l+r+root->data==target && isbst(root,le,INT_MIN,INT_MAX)){
            id=min(le,id);
        }
        return l+r+root->data;
    }
    int minSubtreeSumBST(int target, Node *root) {
        int id=INT_MAX;
        summ(root,id,target);
        return id==INT_MAX?-1:id;
    }
};
