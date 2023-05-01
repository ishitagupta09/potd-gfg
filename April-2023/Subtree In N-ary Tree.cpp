class Solution{
public:
      string cal(Node* root, map<string, int >&m ){
          
          if(root->children.size()==0)
          {
              m[to_string(root->data)]++;
              return to_string(root->data) ;
          }
          string ans ="" ;
          for(auto it: root->children)
          {
              string x = cal(it, m );
              ans+= "+"+x ; 
          }
          ans =ans.substr(1) ;
          ans=to_string(root->data)+"+"+ans ;
            m[ans]++; 
          
        return ans ; 
          
      }


    int duplicateSubtreeNaryTree(Node *root){
        
        // Code here
        map<string , int >m ; 
        cal(root , m ) ; 
        int ans = 0 ;
        for(auto it: m )
        {
            if(it.second>1)
            {
               
                ans++ ;}
                
            
        }
        return ans ; 
    }
};
