class Solution
{
    public:
    int minDiff(Node *root, int K)
    {
        if(root == NULL) return 1e9;
        if(root->data == K) return 0;
        int left = 1e9, right = 1e9;
        if(K < val) left = minDiff(root->left, K);
        else right = minDiff(root->right, K);
        return min(left, min(abs(K - val), right));
    }
};
