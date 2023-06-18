class Solution {
    public static int distributeTicket(int N,int K)
    {
        Deque<Integer> d = new ArrayDeque<>();
        if(K==1){
            return N/2+1;
        }
        if(N==1){
        return 1;
        }        
        for(int i=1;i<=N;i++){
            d.add(i);
        }
      while(d.size()!=1){
       for(int i=0;i<K;i++){
          d.removeFirst();
          if(d.size()==1){
              return d.peek();
          }         
       }
       for(int i=0;i<K;i++){
          d.removeLast();
           if(d.size()==1){
              return d.peek();
          }         
       }       
      }     
        return -1;
    }
}
