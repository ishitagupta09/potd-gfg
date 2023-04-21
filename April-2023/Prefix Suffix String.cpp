class node{
    public:
    node* children[26];
    bool isEnd;
    node(){
        isEnd=false;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
    }
};

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        node* root1=new node();
        node* root2=new node();
        for(auto x:s1){
            string str=x;
            string s=str;
            reverse(s.begin(),s.end());
            
            // fix prefix trie
            node* temp=root1;
            int n = str.size();
            for(int i=0;i<n;i++){
               char ch = str[i];
               int ind = ch-'a';
               if(temp->children[ind]==NULL){
                  node* newnode = new node();
                  temp->children[ind]=newnode;
               }
               temp=temp->children[ind];
            }
            temp->isEnd=true;
            // fix suffix trie
            temp=root2;
            n = s.size();
            for(int i=0;i<n;i++){
               char ch = s[i];
               int ind = ch-'a';
               if(temp->children[ind]==NULL){
                  node* newnode = new node();
                  temp->children[ind]=newnode;
               }
               temp=temp->children[ind];
            }
            temp->isEnd=true;
        }
        int ans=0;
        for(auto x:s2){
            string str=x;
            string s=str;
            reverse(s.begin(),s.end());
            // either matches in prefix trie
               node* temp=root1;
               bool flag1=true;
               int n = str.size();
               for(int i=0;i<n;i++){
                  char ch = str[i];
                  int ind = ch-'a';
                  if(temp->children[ind]==NULL){
                    flag1=false;  
                    break;
                  }
                  temp=temp->children[ind];
                }
            // or matches in suffix trie
               temp=root2;
               bool flag2=true;
               n = s.size();
               for(int i=0;i<n;i++){
                  char ch = s[i];
                  int ind = ch-'a';
                  if(temp->children[ind]==NULL){
                    flag2=false;  
                    break;
                  }
                  temp=temp->children[ind];
                } 
                if(flag1==false&&flag2==false){
                    continue;
                }
                else{
                    ans++;
                }
        }
        return ans;
    }
};
