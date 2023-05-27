class Solution
{
    static Node reverse(Node n){
        Node prev = null;
        Node nn = null;
        while(n != null){
            nn = n.next;
            n.next = prev;
            prev = n;
            n = nn;
        }
        return prev;
    }
    public static Node modifyTheList(Node head)
    {
        Node curr = head;
        int len = 0;
        while(curr != null){
            len++;
            curr = curr.next;
        }
        int mid = len/2;
        curr = head;
        int i = 0;
        if(len % 2 == 0){
            mid--;
        }
        while(i != mid){
            curr = curr.next;
            i++;
        }
        Node join = curr;
        Node r = reverse(curr.next);
        
        curr = head;
        Node curr2 = r;
        while(curr2 != null){
            int temp = curr.data;
            curr.data = curr2.data - curr.data;
            curr2.data = temp;
            curr = curr.next;
            curr2 = curr2.next;
        }
        r = reverse(r);
        join.next = r;
        return head;
   
    }
}
