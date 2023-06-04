class Solution
{
  public:
    string reverseEqn (string s)
        {
            stack<string> st;
            string temp = "";
            
            for(int i=0; i<s.size(); i++) {
                if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                    st.push(temp);
                    temp = s[i];
                    st.push(temp);
                    temp = "";
                }
                else {
                    temp += s[i];
                }
            }
            
            if(temp != "") st.push(temp);
            
            temp = "";
            
            while(!st.empty()) {
                temp += st.top();
                st.pop();
            }
            
            return temp;
            
        }
};
