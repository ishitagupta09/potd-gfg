class Solution{
public:
    vector<char> easyTask(int n,string s,int q,vector<vector<string>> &queries){
        vector<char> ans;
        for(int i=0;i<q;i++){
            if(stoi(queries[i][0])==1){
                s[stoi(queries[i][1])]=queries[i][2][0];
            }
            else{
                vector<int> freq(26,0);
                int st=stoi(queries[i][1]);
                int ed=stoi(queries[i][2]);
                int x=stoi(queries[i][3]);
                for(int j=st;j<=ed;j++)
                freq[s[j]-'a']++;
                int c=0;
                for(int i=25;i>=0;i--){
                    c+=freq[i];
                    if(c>=x){
                        ans.push_back(i+'a');
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
