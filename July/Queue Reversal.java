public Queue<Integer> rev(Queue<Integer> q){
        //add code here.
        Stack<Integer> st=new Stack<Integer>();
        while(!q.isEmpty())
            st.push(q.poll());
    
        while(! st.isEmpty())
           q.offer(st.pop());
        
        return q;
    }
