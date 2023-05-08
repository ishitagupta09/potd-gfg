class Solution{
    public:
        int modulo(string s,int m)
        {
            int x=0;
            for (int i=0;i<s.size();)
            {
                while(x<m&&i<s.size())
                    x*=2,x+=s[i++]-'0';
                x-=m;
            }
            return (x+m)%m;
        }
};
