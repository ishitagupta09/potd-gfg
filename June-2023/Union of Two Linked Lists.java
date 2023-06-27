class Sol
{
    public static Node findUnion(Node head1,Node head2)
    {
        //Add your code here.
        ArrayList<Integer>dist= new ArrayList<>();
        Node t1=head1;
        Node t2=head2;
        while(t1!=null)
        {
            
            if(!dist.contains(t1.data))
            dist.add(t1.data);
            t1=t1.next;
        }
        while(t2!=null)
        {
           if(!dist.contains(t2.data)){
           dist.add(t2.data); 
            }
     
            t2=t2.next;
            
        }
        Collections.sort(dist);
        int i=0;
        Node t3=head1;
        while(t3.next!=null)
        {
            t3.data=dist.get(i++);
            
            if(i>dist.size()-1){
            t3.next=null;
            break;
            }
             t3=t3.next;
            
        }
        if(i<dist.size())
        t3.data=dist.get(i++);
        while(i<dist.size())
        {
          Node n= new Node(dist.get(i++));
          t3.next=n;
          t3=t3.next;
        }
        return head1;
    }
}
