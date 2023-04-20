class Solution{
private:
    void make_parents(Node *root, int home, unordered_map<Node *, Node *> &parent, Node *&bheem) {
        if(!root) return;
        
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            
            if(p->data == home) bheem = p;
            
            if(p->left) {
                parent[p->left] = p;
                q.push(p->left);
            }
            
            if(p->right) {
                parent[p->right] = p;
                q.push(p->right);
            }
        }
        
    }
public:
    int ladoos(Node* root, int home, int k) {
        if(!root) 
            return 0;
        
        unordered_map<Node *, Node *> parent;
        Node *bheem = NULL;
        make_parents(root, home, parent, bheem);
        
        queue<Node *> q;
        unordered_map<Node *, bool> visited;
        
        q.push(bheem);
        visited[bheem] = true;
        
        int sum = bheem->data, curr_lvl = 0;
        
        while(!q.empty()) {
            int n = q.size();
            if(curr_lvl == k) return sum;
            
            for(int i = 0; i < n; i++) {
                auto p = q.front();
                q.pop();
                
                if(p->left and !visited[p->left]) {
                    sum += p->left->data;
                    q.push(p->left);
                    visited[p->left] = true;
                }
                
                if(p->right and !visited[p->right]) {
                    sum += p->right->data;
                    q.push(p->right);
                    visited[p->right] = true;
                }
                
                if(parent[p] and !visited[parent[p]]) {
                    sum += parent[p]->data;
                    q.push(parent[p]);
                    visited[parent[p]] = true;
                }
            }
            
            curr_lvl++;
        }
        
        return sum;
    }
    
};
