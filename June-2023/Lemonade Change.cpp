class Solution {
  public:
    map<int,int> deno{
        {5,0},
        {10,0},
        {20,0}
    };
    bool canCreateDeno(int x){
       for(auto i = deno.rbegin(); i != deno.rend();i++){
           if(i->second > 0 ){
               int times = (x / i->first);
               times = min(times, i->second);
               x -= times * i->first;
               i->second -= times;
           }
       } 
       return x == 0;
    }
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        for(int i = 0 ; i < N; i++){
            int x = bills[i] - 5;
            if(x == 0){
                deno[bills[i]]++;
            }
            else{
                bool f = canCreateDeno(x);
                if(!f)
                    return false;
                deno[bills[i]]++;
            }
        }
        return true;
    }
};
