class Solution{
public:
    string stringMirror(string str){
        int n = str.size();
        string left = "", right = "";
        left += str[0];
        right += str[0];
        string ans(n, 'z');
        for(int i = 1; i < n; i++)
        {
            if(str[i] > str[i - 1])
            {
                break;
            }
            string temp = left + right;
            if(temp < ans)ans = temp;
            left += str[i];
            right = str[i] + right;
            
            
        }
        string temp = left + right;
        if(temp < ans)ans = temp;
        
        return ans;
    }
};
